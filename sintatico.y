%{
#include "nodes.h"
int yyerror(const char *s);
int yylex(void);
%}

%define parse.error verbose 

%token READ_S READ_E SHOW_E SHOW_S DECL_IT DECL_FT ICR CMP_AND CMP_OR CMP_MEI CMP_MAI DECL_ST 
%token IF_S IF_E ELSE_S ELSE_E LOOP_S LOOP_E LOOP_P CMP_MAQ CMP_DIF CMP_MEQ CMP_IG DECL_BL BOOL_F BOOL_T
%token<integer> INTEGER
%token<flt> FLOAT
%token<name> IDENT

%type<node> stmts stmt atrib arit expr term factor prog atstring decl if show read loop comblock cond exprlog termlog faclog perexpr

%start prog

%union {
     int integer;
     float flt;
     char *name;
     Node *node;
} 

%%

prog : stmts {    
     Program pg($stmts);
     pg.printAST();

     SemanticVarDecl vd;
     vd.check(&pg);
     vd.printFoundVars();
}                          

stmts : stmts[ss] stmt {
     $ss->append($stmt);
     $$ = $ss;
}

stmts : stmt {
     $$ = new Stmts($stmt);
}

stmt : atrib
     | if
     | show
     | read
     | loop
     | arit
     | decl
     ;

decl : DECL_IT IDENT[name] ']' INTEGER[size] '[' {
     $$ = new VectorDecl($name, $size, "int");
}

decl : DECL_ST IDENT[name] ']' INTEGER[size] '[' {
     $$ = new VectorDecl($name, $size, "string");
}

decl : DECL_FT IDENT[name] ']' INTEGER[size] '[' {
     $$ = new VectorDecl($name, $size, "float");
}

decl : DECL_BL IDENT[name] ']' INTEGER[size] '[' {
     $$ = new VectorDecl($name, $size, "boolean");
}

decl : DECL_IT IDENT[name] {
     $$ = new VarDecl($name, "int");
}

decl : DECL_FT IDENT[name] {
     $$ = new VarDecl($name, "float");
}

decl : DECL_BL IDENT[name] {
     $$ = new VarDecl($name, "bool");
}

decl : DECL_ST IDENT[name] {
     $$ = new VarDecl($name, "string");
}

atrib : IDENT[id] '=' arit[at] {
     $$ = new Store($id, $at);
}

atrib : IDENT[id] '=' BOOL_T {
     $$ = new Store($id,  new ConstBoolean(true));
}

atrib : IDENT[id] '=' BOOL_F {
     $$ = new Store($id,  new ConstBoolean(false));
}

atrib : IDENT[id] ']'atstring[ats]'[' '=' arit[at] {
     $$ = new StoreVector($id, $ats, $at);
}

atrib : IDENT[id] ']'atstring[ats]'[' '=' BOOL_T{
     $$ = new StoreVector($id, $ats, new ConstBoolean(true));
}

atrib : IDENT[id] ']'atstring[ats]'[' '=' BOOL_F{
     $$ = new StoreVector($id, $ats, new ConstBoolean(false));
}   

loop : LOOP_S INTEGER ':' DECL_IT IDENT ICR LOOP_E '|' comblock '|'
     | LOOP_S cond LOOP_E '|' comblock '|'
     | LOOP_S cond LOOP_E '|' comblock LOOP_P '|'
     ;

if : IF_S cond IF_E '|' comblock '|'
   | IF_S cond IF_E '|' comblock '|' ELSE_S comblock ELSE_E
   ;

cond : exprlog
     ;

exprlog : termlog
        | exprlog CMP_OR termlog
        ;

termlog : faclog
        | termlog CMP_AND faclog
        ;

faclog : perexpr
       | comp
       ;

comp : perexpr cmpl perexpr
     ;

perexpr : val
        | '(' exprlog ')'
        ;

cmpl : CMP_MAQ
     | CMP_MEQ
     | CMP_IG
     | CMP_MAI
     | CMP_MEI
     | CMP_DIF
     ;

val : INTEGER
    | FLOAT
    | IDENT
    | IDENT ']'atstring'['
    ;

read : READ_S '{' rdexpr '}' READ_E 
     ;

rdexpr : tpvar '@' IDENT
       | tpvar '@' IDENT rdexpr
       | tpvar '@' IDENT ']' atstring '['
       | tpvar '@' IDENT ']' atstring '[' rdexpr
       ;

tpvar : DECL_IT
      | DECL_FT
      | DECL_ST
      | DECL_BL
      ;

show : SHOW_S '{' scont '}' SHOW_E
     ;

scont : string
      | termst
      ;

termst : mistl
       | mistl string
       ;

mistl : varshow                          
      | string varshow                
      | mistl varshow                 
      | mistl string varshow         
      ;

string : atstring
       | string atstring
       ;

varshow : '%' IDENT '\\'
        | '%' IDENT ']' atstring '[' '\\'
        ;

atstring : IDENT[id] {
     $$ = new Load($id);
}

atstring : INTEGER[int] {
     $$ = new ConstInteger($int);
}

arit : expr {
     $$ = $expr; 
}

expr : expr[e1] '+' term {
     $$ = new BinaryOp($e1, '+', $term);
}

expr : expr[e1] '-' term {
     $$ = new BinaryOp($e1, '-', $term);
}

expr : term {
     $$ = $term;
}

term : term[t1] '*' factor {
     $$ = new BinaryOp($t1, '*', $factor);
}

term : term[t1] '/' factor {
     $$ = new BinaryOp($t1, '/', $factor);
}
     
term : factor {
     $$ = $factor;
}

factor : '(' expr ')'{
     $$ = $expr;
}

factor : FLOAT[flt] {
     $$ = new ConstDouble($flt);
}

factor : INTEGER[int]{
     $$ = new ConstInteger($int);
}

factor : IDENT[id] {
     $$ = new Load($id);
}
       
factor : IDENT[id] ']'atstring[ats]'[' {
     $$ = new LoadVector($id, $ats);
}

comblock : comblock stmt
         | stmt
         ;

%%

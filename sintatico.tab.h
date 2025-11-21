/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOK_PRINT = 258,               /* TOK_PRINT  */
    TOK_INT = 259,                 /* TOK_INT  */
    TOK_FLT = 260,                 /* TOK_FLT  */
    TOK_IDENT = 261,               /* TOK_IDENT  */
    NUMBER = 262,                  /* NUMBER  */
    IDENT = 263,                   /* IDENT  */
    READ_S = 264,                  /* READ_S  */
    READ_E = 265,                  /* READ_E  */
    SHOW_E = 266,                  /* SHOW_E  */
    SHOW_S = 267,                  /* SHOW_S  */
    DECL_IT = 268,                 /* DECL_IT  */
    DECL_FT = 269,                 /* DECL_FT  */
    ICR = 270,                     /* ICR  */
    CMP_AND = 271,                 /* CMP_AND  */
    CMP_OR = 272,                  /* CMP_OR  */
    CMP_MEI = 273,                 /* CMP_MEI  */
    CMP_MAI = 274,                 /* CMP_MAI  */
    DECL_ST = 275,                 /* DECL_ST  */
    IF_S = 276,                    /* IF_S  */
    IF_E = 277,                    /* IF_E  */
    ELSE_S = 278,                  /* ELSE_S  */
    ELSE_E = 279,                  /* ELSE_E  */
    LOOP_S = 280,                  /* LOOP_S  */
    LOOP_E = 281,                  /* LOOP_E  */
    LOOP_P = 282,                  /* LOOP_P  */
    CMP_MAQ = 283,                 /* CMP_MAQ  */
    CMP_DIF = 284,                 /* CMP_DIF  */
    CMP_MEQ = 285,                 /* CMP_MEQ  */
    CMP_IG = 286,                  /* CMP_IG  */
    DECL_BL = 287,                 /* DECL_BL  */
    BOOL_F = 288,                  /* BOOL_F  */
    BOOL_T = 289                   /* BOOL_T  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "sintatico.y"

     int integer;
     float flt;
     char *name;
     Node *node;

#line 105 "sintatico.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */

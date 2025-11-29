/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "sintatico.y"

#include "nodes.h"
#include <map>
#include <string>

int yyerror(const char *s);
int yylex(void);

std::map<std::string, int> memory_int;
std::map<std::string, std::map<int, int>> memory_vector_int;
std::map<std::string, std::string> memory_string;
std::map<std::string, std::map<int, std::string>> memory_vector_string;
std::map<std::string, double> memory_float; 
std::map<std::string, std::map<int, double>> memory_vector_float;
std::map<std::string, std::map<int, bool>> memory_vector_bool;
std::map<std::string, bool> memory_bool;
std::map<std::string, int> read_counts;

std::set<std::string> declared_vars;
std::set<std::string> declared_floats;


#line 94 "sintatico.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "sintatico.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_READ_S = 3,                     /* READ_S  */
  YYSYMBOL_READ_E = 4,                     /* READ_E  */
  YYSYMBOL_SHOW_E = 5,                     /* SHOW_E  */
  YYSYMBOL_SHOW_S = 6,                     /* SHOW_S  */
  YYSYMBOL_DECL_IT = 7,                    /* DECL_IT  */
  YYSYMBOL_DECL_FT = 8,                    /* DECL_FT  */
  YYSYMBOL_ICR = 9,                        /* ICR  */
  YYSYMBOL_CMP_AND = 10,                   /* CMP_AND  */
  YYSYMBOL_CMP_OR = 11,                    /* CMP_OR  */
  YYSYMBOL_CMP_MEI = 12,                   /* CMP_MEI  */
  YYSYMBOL_CMP_MAI = 13,                   /* CMP_MAI  */
  YYSYMBOL_DECL_ST = 14,                   /* DECL_ST  */
  YYSYMBOL_IF_S = 15,                      /* IF_S  */
  YYSYMBOL_IF_E = 16,                      /* IF_E  */
  YYSYMBOL_ELSE_S = 17,                    /* ELSE_S  */
  YYSYMBOL_ELSE_E = 18,                    /* ELSE_E  */
  YYSYMBOL_LOOP_S = 19,                    /* LOOP_S  */
  YYSYMBOL_LOOP_E = 20,                    /* LOOP_E  */
  YYSYMBOL_LOOP_P = 21,                    /* LOOP_P  */
  YYSYMBOL_CMP_MAQ = 22,                   /* CMP_MAQ  */
  YYSYMBOL_CMP_DIF = 23,                   /* CMP_DIF  */
  YYSYMBOL_CMP_MEQ = 24,                   /* CMP_MEQ  */
  YYSYMBOL_CMP_IG = 25,                    /* CMP_IG  */
  YYSYMBOL_DECL_BL = 26,                   /* DECL_BL  */
  YYSYMBOL_BOOL_F = 27,                    /* BOOL_F  */
  YYSYMBOL_BOOL_T = 28,                    /* BOOL_T  */
  YYSYMBOL_INTEGER = 29,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 30,                     /* FLOAT  */
  YYSYMBOL_IDENT = 31,                     /* IDENT  */
  YYSYMBOL_32_ = 32,                       /* ']'  */
  YYSYMBOL_33_ = 33,                       /* '['  */
  YYSYMBOL_34_ = 34,                       /* '='  */
  YYSYMBOL_35_ = 35,                       /* ':'  */
  YYSYMBOL_36_ = 36,                       /* '|'  */
  YYSYMBOL_37_ = 37,                       /* '('  */
  YYSYMBOL_38_ = 38,                       /* ')'  */
  YYSYMBOL_39_ = 39,                       /* '{'  */
  YYSYMBOL_40_ = 40,                       /* '}'  */
  YYSYMBOL_41_ = 41,                       /* '@'  */
  YYSYMBOL_42_ = 42,                       /* '%'  */
  YYSYMBOL_43_ = 43,                       /* '\\'  */
  YYSYMBOL_44_ = 44,                       /* ';'  */
  YYSYMBOL_45_ = 45,                       /* '+'  */
  YYSYMBOL_46_ = 46,                       /* '-'  */
  YYSYMBOL_47_ = 47,                       /* '*'  */
  YYSYMBOL_48_ = 48,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_prog = 50,                      /* prog  */
  YYSYMBOL_stmts = 51,                     /* stmts  */
  YYSYMBOL_stmt = 52,                      /* stmt  */
  YYSYMBOL_decl = 53,                      /* decl  */
  YYSYMBOL_atrib = 54,                     /* atrib  */
  YYSYMBOL_loop = 55,                      /* loop  */
  YYSYMBOL_if = 56,                        /* if  */
  YYSYMBOL_comblock = 57,                  /* comblock  */
  YYSYMBOL_exprlog = 58,                   /* exprlog  */
  YYSYMBOL_termlog = 59,                   /* termlog  */
  YYSYMBOL_faclog = 60,                    /* faclog  */
  YYSYMBOL_comp = 61,                      /* comp  */
  YYSYMBOL_perexpr = 62,                   /* perexpr  */
  YYSYMBOL_cmpl = 63,                      /* cmpl  */
  YYSYMBOL_val = 64,                       /* val  */
  YYSYMBOL_read = 65,                      /* read  */
  YYSYMBOL_rdexpr = 66,                    /* rdexpr  */
  YYSYMBOL_rditem = 67,                    /* rditem  */
  YYSYMBOL_tpvar = 68,                     /* tpvar  */
  YYSYMBOL_show = 69,                      /* show  */
  YYSYMBOL_showLST = 70,                   /* showLST  */
  YYSYMBOL_showITM = 71,                   /* showITM  */
  YYSYMBOL_varshow = 72,                   /* varshow  */
  YYSYMBOL_atstring = 73,                  /* atstring  */
  YYSYMBOL_indice = 74,                    /* indice  */
  YYSYMBOL_arit = 75,                      /* arit  */
  YYSYMBOL_expr = 76,                      /* expr  */
  YYSYMBOL_term = 77,                      /* term  */
  YYSYMBOL_factor = 78                     /* factor  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  169

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    42,     2,     2,
      37,    38,    47,    45,     2,    46,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    35,    44,
       2,    34,     2,     2,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,    43,    32,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,    36,    40,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    47,    47,    56,    61,    65,    66,    67,    68,    69,
      70,    71,    74,    79,    84,    90,    95,   100,   106,   111,
     116,   132,   137,   142,   162,   169,   175,   179,   183,   187,
     191,   195,   200,   204,   208,   212,   216,   220,   224,   228,
     232,   236,   240,   244,   248,   252,   256,   260,   264,   268,
     272,   296,   300,   304,   308,   313,   318,   323,   327,   331,
     335,   339,   343,   348,   352,   356,   381,   413,   417,   421,
     425,   429,   433,   438,   442,   446,   450,   454,   458,   462,
     466,   470,   474,   478,   482,   486,   490,   494,   498,   502,
     506,   510,   514,   518,   522,   526,   547
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "READ_S", "READ_E",
  "SHOW_E", "SHOW_S", "DECL_IT", "DECL_FT", "ICR", "CMP_AND", "CMP_OR",
  "CMP_MEI", "CMP_MAI", "DECL_ST", "IF_S", "IF_E", "ELSE_S", "ELSE_E",
  "LOOP_S", "LOOP_E", "LOOP_P", "CMP_MAQ", "CMP_DIF", "CMP_MEQ", "CMP_IG",
  "DECL_BL", "BOOL_F", "BOOL_T", "INTEGER", "FLOAT", "IDENT", "']'", "'['",
  "'='", "':'", "'|'", "'('", "')'", "'{'", "'}'", "'@'", "'%'", "'\\\\'",
  "';'", "'+'", "'-'", "'*'", "'/'", "$accept", "prog", "stmts", "stmt",
  "decl", "atrib", "loop", "if", "comblock", "exprlog", "termlog",
  "faclog", "comp", "perexpr", "cmpl", "val", "read", "rdexpr", "rditem",
  "tpvar", "show", "showLST", "showITM", "varshow", "atstring", "indice",
  "arit", "expr", "term", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-125)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     139,   -34,    -3,    11,    15,    40,    24,    49,    63,  -125,
    -125,   -21,    60,    96,   139,  -125,  -125,  -125,  -125,  -125,
    -125,  -125,  -125,   -20,    22,  -125,   103,   146,    17,    73,
      80,  -125,  -125,    81,    24,    18,   104,  -125,  -125,    35,
    -125,    83,     8,    87,    33,   208,    89,    47,  -125,  -125,
      60,    60,    60,    60,  -125,  -125,  -125,    10,  -125,    82,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,    91,  -125,  -125,  -125,  -125,  -125,   166,  -125,  -125,
    -125,    95,    97,    99,    33,    -5,    24,    93,    24,  -125,
    -125,  -125,  -125,  -125,  -125,    24,   118,    98,   106,  -125,
    -125,   100,  -125,  -125,  -125,    33,  -125,    22,    22,  -125,
    -125,   132,  -125,   108,   -22,   135,  -125,   111,   115,   116,
     117,  -125,   104,   139,  -125,  -125,   120,   139,   119,   121,
     123,  -125,   125,   186,  -125,  -125,  -125,  -125,  -125,  -125,
    -125,    37,   150,     1,  -125,   213,  -125,    33,   127,   144,
    -125,   142,   130,  -125,  -125,  -125,  -125,   138,   129,   139,
     137,  -125,  -125,  -125,    69,   139,  -125,   101,  -125
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
      93,    95,     0,     0,     2,     4,    11,     5,     9,     6,
       8,     7,    10,    85,    88,    91,     0,     0,    16,    17,
      19,    48,    49,    50,     0,     0,    33,    35,    38,    37,
      40,    48,     0,    18,     0,     0,    95,     0,     1,     3,
       0,     0,     0,     0,    57,    58,    59,     0,    53,     0,
      68,    67,    78,    77,    69,    72,    73,    74,    75,    76,
      70,     0,    71,    79,    80,    81,    82,     0,    61,    64,
      63,     0,     0,     0,     0,     0,     0,     0,     0,    46,
      45,    42,    47,    43,    44,     0,     0,     0,     0,    84,
      83,     0,    22,    21,    20,     0,    92,    86,    87,    89,
      90,     0,    54,     0,     0,    76,    62,     0,     0,     0,
       0,    41,    34,     0,    36,    39,     0,     0,     0,    96,
       0,    52,    55,     0,    65,    60,    12,    14,    13,    51,
      32,     0,     0,     0,    15,     0,    96,     0,     0,    29,
      31,     0,     0,    27,    25,    24,    23,     0,     0,     0,
       0,    28,    56,    66,     0,     0,    30,     0,    26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -125,  -125,  -125,     0,  -125,  -125,  -125,  -125,  -124,     5,
      77,    86,  -125,    94,  -125,  -125,  -125,  -125,   145,  -125,
    -125,  -125,   105,  -125,    76,   -82,   -44,   184,    31,    50
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    13,    14,   140,    16,    17,    18,    19,   141,    35,
      36,    37,    38,    39,    95,    40,    20,    57,    58,    59,
      21,    77,    78,    79,    80,   101,    22,    23,    24,    25
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      15,   104,   120,   143,     1,    26,    86,     2,     3,     4,
     133,    44,    42,    45,    49,     5,     6,    54,    55,    86,
       7,   134,   152,   130,    56,    50,    51,     8,    97,    86,
       9,    10,    11,   121,    87,   164,    27,   153,    12,    85,
       1,   167,    28,     2,     3,     4,    29,    89,    90,    81,
     111,     5,     6,    31,    32,    33,     7,    91,    92,    93,
      94,    34,    99,     8,   100,   157,     9,    10,    11,    52,
      53,    30,     1,   149,    12,     2,     3,     4,    41,    32,
      33,   107,   108,     5,     6,   106,    34,   166,     7,     9,
      10,    46,    50,    51,    43,     8,    48,    12,     9,    10,
      11,   156,   109,   110,     1,    82,    12,     2,     3,     4,
      54,    55,    83,    84,    88,     5,     6,    56,    96,    98,
       7,   105,   114,   113,   117,   126,   118,     8,   119,   123,
       9,    10,    11,   129,   127,   128,   131,   168,    12,   132,
     135,   150,     1,   150,   136,     2,     3,     4,   137,   138,
     139,   142,   144,     5,     6,   145,   146,   147,     7,   151,
     158,   159,   160,   122,   150,     8,   161,   150,     9,    10,
      11,   162,   163,   165,   124,    60,    12,    61,    62,    63,
      64,    65,   116,    66,    67,    68,    69,    70,    71,   125,
      72,    73,    74,    75,    76,    60,    47,    61,    62,    63,
      64,    65,   112,    66,    67,    68,   115,    70,    71,   148,
      72,    73,    74,    75,    76,    60,     0,    61,    62,    63,
      64,    65,     0,    66,    67,    68,    69,    70,     0,     0,
      72,    73,    74,    75,    76,   102,   103,     9,    10,    46,
     154,   155,     9,    10,    46,    12,     0,     0,     0,     0,
      12
};

static const yytype_int16 yycheck[] =
{
       0,    45,    84,   127,     3,    39,    11,     6,     7,     8,
      32,    32,     7,    34,    14,    14,    15,     7,     8,    11,
      19,    43,    21,   105,    14,    45,    46,    26,    20,    11,
      29,    30,    31,    38,    16,   159,    39,    36,    37,    34,
       3,   165,    31,     6,     7,     8,    31,    12,    13,    32,
      40,    14,    15,    29,    30,    31,    19,    22,    23,    24,
      25,    37,    29,    26,    31,   147,    29,    30,    31,    47,
      48,    31,     3,    36,    37,     6,     7,     8,    29,    30,
      31,    50,    51,    14,    15,    38,    37,    18,    19,    29,
      30,    31,    45,    46,    31,    26,     0,    37,    29,    30,
      31,   145,    52,    53,     3,    32,    37,     6,     7,     8,
       7,     8,    32,    32,    10,    14,    15,    14,    35,    32,
      19,    32,    31,    41,    29,     7,    29,    26,    29,    36,
      29,    30,    31,    33,    36,    29,     4,    36,    37,    31,
       5,   141,     3,   143,    33,     6,     7,     8,    33,    33,
      33,    31,    33,    14,    15,    34,    33,    32,    19,     9,
      33,    17,    20,    86,   164,    26,    36,   167,    29,    30,
      31,    33,    43,    36,    88,    29,    37,    31,    32,    33,
      34,    35,    77,    37,    38,    39,    40,    41,    42,    95,
      44,    45,    46,    47,    48,    29,    12,    31,    32,    33,
      34,    35,    57,    37,    38,    39,    40,    41,    42,   133,
      44,    45,    46,    47,    48,    29,    -1,    31,    32,    33,
      34,    35,    -1,    37,    38,    39,    40,    41,    -1,    -1,
      44,    45,    46,    47,    48,    27,    28,    29,    30,    31,
      27,    28,    29,    30,    31,    37,    -1,    -1,    -1,    -1,
      37
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,     7,     8,    14,    15,    19,    26,    29,
      30,    31,    37,    50,    51,    52,    53,    54,    55,    56,
      65,    69,    75,    76,    77,    78,    39,    39,    31,    31,
      31,    29,    30,    31,    37,    58,    59,    60,    61,    62,
      64,    29,    58,    31,    32,    34,    31,    76,     0,    52,
      45,    46,    47,    48,     7,     8,    14,    66,    67,    68,
      29,    31,    32,    33,    34,    35,    37,    38,    39,    40,
      41,    42,    44,    45,    46,    47,    48,    70,    71,    72,
      73,    32,    32,    32,    32,    58,    11,    16,    10,    12,
      13,    22,    23,    24,    25,    63,    35,    20,    32,    29,
      31,    74,    27,    28,    75,    32,    38,    77,    77,    78,
      78,    40,    67,    41,    31,    40,    71,    29,    29,    29,
      74,    38,    59,    36,    60,    62,     7,    36,    29,    33,
      74,     4,    31,    32,    43,     5,    33,    33,    33,    33,
      52,    57,    31,    57,    33,    34,    33,    32,    73,    36,
      52,     9,    21,    36,    27,    28,    75,    74,    33,    17,
      20,    36,    33,    43,    57,    36,    18,    57,    36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    54,    54,    54,    54,    55,    55,    55,    56,
      56,    57,    57,    58,    58,    59,    59,    60,    60,    61,
      62,    62,    63,    63,    63,    63,    63,    63,    64,    64,
      64,    64,    65,    66,    66,    67,    67,    68,    68,    68,
      69,    70,    70,    71,    71,    72,    72,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    74,    74,    75,    76,    76,    76,    77,
      77,    77,    78,    78,    78,    78,    78
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     5,     5,     2,     2,     2,     2,
       3,     3,     3,     6,     6,     6,    10,     6,     7,     6,
       9,     2,     1,     1,     3,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     5,     1,     2,     3,     6,     1,     1,     1,
       5,     1,     2,     1,     1,     3,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     1,     3,     1,     1,     1,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* prog: stmts  */
#line 47 "sintatico.y"
             {    
     Program pg((yyvsp[0].node));
     pg.printAST();

     SemanticVarDecl vd;
     vd.check(&pg);
     vd.printFoundVars();
}
#line 1563 "sintatico.tab.c"
    break;

  case 3: /* stmts: stmts stmt  */
#line 56 "sintatico.y"
                       {
     (yyvsp[-1].node)->append((yyvsp[0].node));
     (yyval.node) = (yyvsp[-1].node);
}
#line 1572 "sintatico.tab.c"
    break;

  case 4: /* stmts: stmt  */
#line 61 "sintatico.y"
             {
     (yyval.node) = new Stmts((yyvsp[0].node));
}
#line 1580 "sintatico.tab.c"
    break;

  case 12: /* decl: DECL_IT IDENT ']' INTEGER '['  */
#line 74 "sintatico.y"
                                                 {
     declared_vars.insert((yyvsp[-3].name));
     (yyval.node) = new VectorDecl((yyvsp[-3].name), (yyvsp[-1].integer), "int");
}
#line 1589 "sintatico.tab.c"
    break;

  case 13: /* decl: DECL_ST IDENT ']' INTEGER '['  */
#line 79 "sintatico.y"
                                                 {
     declared_vars.insert((yyvsp[-3].name));
     (yyval.node) = new VectorDecl((yyvsp[-3].name), (yyvsp[-1].integer), "string");
}
#line 1598 "sintatico.tab.c"
    break;

  case 14: /* decl: DECL_FT IDENT ']' INTEGER '['  */
#line 84 "sintatico.y"
                                                 {
     declared_floats.insert((yyvsp[-3].name));
     declared_vars.insert((yyvsp[-3].name));
     (yyval.node) = new VectorDecl((yyvsp[-3].name), (yyvsp[-1].integer), "float");
}
#line 1608 "sintatico.tab.c"
    break;

  case 15: /* decl: DECL_BL IDENT ']' INTEGER '['  */
#line 90 "sintatico.y"
                                                 {
     declared_vars.insert((yyvsp[-3].name));
     (yyval.node) = new VectorDecl((yyvsp[-3].name), (yyvsp[-1].integer), "boolean");
}
#line 1617 "sintatico.tab.c"
    break;

  case 16: /* decl: DECL_IT IDENT  */
#line 95 "sintatico.y"
                           {
     declared_vars.insert((yyvsp[0].name));
     (yyval.node) = new VarDecl((yyvsp[0].name), "int");
}
#line 1626 "sintatico.tab.c"
    break;

  case 17: /* decl: DECL_FT IDENT  */
#line 100 "sintatico.y"
                           {
     declared_floats.insert((yyvsp[0].name));
     declared_vars.insert((yyvsp[0].name));
     (yyval.node) = new VarDecl((yyvsp[0].name), "float");
}
#line 1636 "sintatico.tab.c"
    break;

  case 18: /* decl: DECL_BL IDENT  */
#line 106 "sintatico.y"
                           {
     declared_vars.insert((yyvsp[0].name));
     (yyval.node) = new VarDecl((yyvsp[0].name), "bool");
}
#line 1645 "sintatico.tab.c"
    break;

  case 19: /* decl: DECL_ST IDENT  */
#line 111 "sintatico.y"
                           {
     declared_vars.insert((yyvsp[0].name));
     (yyval.node) = new VarDecl((yyvsp[0].name), "string");
}
#line 1654 "sintatico.tab.c"
    break;

  case 20: /* atrib: IDENT '=' arit  */
#line 116 "sintatico.y"
                               {
     string sVal = (yyvsp[0].node)->getStringValue();
     if (sVal != "") {
          memory_string[(yyvsp[-2].name)] = sVal;
     } 
     else if (declared_floats.count((yyvsp[-2].name))) {
          double val = (yyvsp[0].node)->getDoubleValue();
          memory_float[(yyvsp[-2].name)] = val;
     }
     else {
          int val = (yyvsp[0].node)->getIntValue(); 
          memory_int[(yyvsp[-2].name)] = val;
     }
     (yyval.node) = new Store((yyvsp[-2].name), (yyvsp[0].node));
}
#line 1674 "sintatico.tab.c"
    break;

  case 21: /* atrib: IDENT '=' BOOL_T  */
#line 132 "sintatico.y"
                             {
     memory_bool[(yyvsp[-2].name)] = true; 
     (yyval.node) = new Store((yyvsp[-2].name),  new ConstBoolean(true));
}
#line 1683 "sintatico.tab.c"
    break;

  case 22: /* atrib: IDENT '=' BOOL_F  */
#line 137 "sintatico.y"
                             {
     memory_bool[(yyvsp[-2].name)] = false; 
     (yyval.node) = new Store((yyvsp[-2].name),  new ConstBoolean(false));
}
#line 1692 "sintatico.tab.c"
    break;

  case 23: /* atrib: IDENT ']' indice '[' '=' arit  */
#line 142 "sintatico.y"
                                                 {
     int indexVal = (yyvsp[-3].node)->getIntValue();
     string strVal = (yyvsp[0].node)->getStringValue();
     
     if (strVal != "") {
          memory_vector_string[(yyvsp[-5].name)][indexVal] = strVal;
          (yyval.node) = new StoreVector((yyvsp[-5].name), (yyvsp[-3].node), (yyvsp[0].node), indexVal, true);
     } 
     else if (declared_floats.count((yyvsp[-5].name))) {
          double val = (yyvsp[0].node)->getDoubleValue();
          memory_vector_float[(yyvsp[-5].name)][indexVal] = val;
          (yyval.node) = new StoreVector((yyvsp[-5].name), (yyvsp[-3].node), (yyvsp[0].node), indexVal, true);
     }
     else {
          int intVal = (yyvsp[0].node)->getIntValue();
          memory_vector_int[(yyvsp[-5].name)][indexVal] = intVal;
          (yyval.node) = new StoreVector((yyvsp[-5].name), (yyvsp[-3].node), (yyvsp[0].node), indexVal, true);
     }
}
#line 1716 "sintatico.tab.c"
    break;

  case 24: /* atrib: IDENT ']' indice '[' '=' BOOL_T  */
#line 162 "sintatico.y"
                                               {
     int indexVal = (yyvsp[-3].node)->getIntValue();
     memory_vector_bool[(yyvsp[-5].name)][indexVal] = true;
     (yyval.node) = new StoreVector((yyvsp[-5].name), (yyvsp[-3].node), new ConstBoolean(true), indexVal, true);
}
#line 1726 "sintatico.tab.c"
    break;

  case 25: /* atrib: IDENT ']' indice '[' '=' BOOL_F  */
#line 169 "sintatico.y"
                                               {
     int indexVal = (yyvsp[-3].node)->getIntValue();
     memory_vector_bool[(yyvsp[-5].name)][indexVal] = false;
     (yyval.node) = new StoreVector((yyvsp[-5].name), (yyvsp[-3].node), new ConstBoolean(false), indexVal, true);
}
#line 1736 "sintatico.tab.c"
    break;

  case 26: /* loop: LOOP_S INTEGER ':' DECL_IT IDENT ICR LOOP_E '|' comblock '|'  */
#line 175 "sintatico.y"
                                                                                 {
     (yyval.node) = new ForStmt((yyvsp[-5].name), (yyvsp[-8].integer), (yyvsp[-1].node));
}
#line 1744 "sintatico.tab.c"
    break;

  case 27: /* loop: LOOP_S exprlog LOOP_E '|' comblock '|'  */
#line 179 "sintatico.y"
                                                       {
     (yyval.node) = new LoopStmt((yyvsp[-4].node), (yyvsp[-1].node));
}
#line 1752 "sintatico.tab.c"
    break;

  case 28: /* loop: LOOP_S exprlog LOOP_E '|' comblock LOOP_P '|'  */
#line 183 "sintatico.y"
                                                               {
     (yyval.node) = new LoopStmt((yyvsp[-5].node), (yyvsp[-2].node));
}
#line 1760 "sintatico.tab.c"
    break;

  case 29: /* if: IF_S exprlog IF_E '|' comblock '|'  */
#line 187 "sintatico.y"
                                                  {
   (yyval.node) = new IfStmt((yyvsp[-4].node), (yyvsp[-1].node));
}
#line 1768 "sintatico.tab.c"
    break;

  case 30: /* if: IF_S exprlog IF_E '|' comblock '|' ELSE_S comblock ELSE_E  */
#line 191 "sintatico.y"
                                                                             {
   (yyval.node) = new IfStmt((yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-1].node));
}
#line 1776 "sintatico.tab.c"
    break;

  case 31: /* comblock: comblock stmt  */
#line 195 "sintatico.y"
                              {
     (yyvsp[-1].node)->append((yyvsp[0].node));
     (yyval.node) = (yyvsp[-1].node);
}
#line 1785 "sintatico.tab.c"
    break;

  case 32: /* comblock: stmt  */
#line 200 "sintatico.y"
                {
     (yyval.node) = new Stmts((yyvsp[0].node));
}
#line 1793 "sintatico.tab.c"
    break;

  case 33: /* exprlog: termlog  */
#line 204 "sintatico.y"
                       { 
     (yyval.node) = (yyvsp[0].node);
}
#line 1801 "sintatico.tab.c"
    break;

  case 34: /* exprlog: exprlog CMP_OR termlog  */
#line 208 "sintatico.y"
                                         {
     (yyval.node) = new CompOp((yyvsp[-2].node), "OU", (yyvsp[0].node));
}
#line 1809 "sintatico.tab.c"
    break;

  case 35: /* termlog: faclog  */
#line 212 "sintatico.y"
                      { 
     (yyval.node) = (yyvsp[0].node); 
}
#line 1817 "sintatico.tab.c"
    break;

  case 36: /* termlog: termlog CMP_AND faclog  */
#line 216 "sintatico.y"
                                         {
     (yyval.node) = new CompOp((yyvsp[-2].node), "E", (yyvsp[0].node));
}
#line 1825 "sintatico.tab.c"
    break;

  case 37: /* faclog: perexpr  */
#line 220 "sintatico.y"
                      { 
     (yyval.node) = (yyvsp[0].node); 
}
#line 1833 "sintatico.tab.c"
    break;

  case 38: /* faclog: comp  */
#line 224 "sintatico.y"
                   { 
     (yyval.node) = (yyvsp[0].node);
}
#line 1841 "sintatico.tab.c"
    break;

  case 39: /* comp: perexpr cmpl perexpr  */
#line 228 "sintatico.y"
                                        {
     (yyval.node) = new CompOp((yyvsp[-2].node), (yyvsp[-1].name), (yyvsp[0].node));
}
#line 1849 "sintatico.tab.c"
    break;

  case 40: /* perexpr: val  */
#line 232 "sintatico.y"
                  { 
     (yyval.node) = (yyvsp[0].node); 
}
#line 1857 "sintatico.tab.c"
    break;

  case 41: /* perexpr: '(' exprlog ')'  */
#line 236 "sintatico.y"
                               { 
     (yyval.node) = (yyvsp[-1].node); 
}
#line 1865 "sintatico.tab.c"
    break;

  case 42: /* cmpl: CMP_MAQ  */
#line 240 "sintatico.y"
               { 
     (yyval.name) = (char*)"MAIOR_QUE"; 
}
#line 1873 "sintatico.tab.c"
    break;

  case 43: /* cmpl: CMP_MEQ  */
#line 244 "sintatico.y"
               { 
     (yyval.name) = (char*)"MENOR_QUE"; 
}
#line 1881 "sintatico.tab.c"
    break;

  case 44: /* cmpl: CMP_IG  */
#line 248 "sintatico.y"
               { 
     (yyval.name) = (char*)"IGUAL_A"; 
}
#line 1889 "sintatico.tab.c"
    break;

  case 45: /* cmpl: CMP_MAI  */
#line 252 "sintatico.y"
               { 
     (yyval.name) = (char*)"MAIOR_OU_IGUAL_A"; 
}
#line 1897 "sintatico.tab.c"
    break;

  case 46: /* cmpl: CMP_MEI  */
#line 256 "sintatico.y"
               { 
     (yyval.name) = (char*)"MENOR_OU_IGUAL_A"; 
}
#line 1905 "sintatico.tab.c"
    break;

  case 47: /* cmpl: CMP_DIF  */
#line 260 "sintatico.y"
               { 
     (yyval.name) = (char*)"DIFERENTE_DE"; 
}
#line 1913 "sintatico.tab.c"
    break;

  case 48: /* val: INTEGER  */
#line 264 "sintatico.y"
                 { 
    (yyval.node) = new ConstInteger((yyvsp[0].integer)); 
}
#line 1921 "sintatico.tab.c"
    break;

  case 49: /* val: FLOAT  */
#line 268 "sintatico.y"
               { 
    (yyval.node) = new ConstDouble((yyvsp[0].flt)); 
}
#line 1929 "sintatico.tab.c"
    break;

  case 50: /* val: IDENT  */
#line 272 "sintatico.y"
                { 
    int reads = read_counts[(yyvsp[0].name)]; /* Pega contagem de leituras */
    
    if (declared_vars.count((yyvsp[0].name))) {
        if (memory_int.count((yyvsp[0].name))) {
             /* Passa 'reads' como novo argumento para o construtor Load */
             (yyval.node) = new Load((yyvsp[0].name), memory_int[(yyvsp[0].name)], true, reads);
        }
        else if (memory_float.count((yyvsp[0].name))) {
             double val = memory_float[(yyvsp[0].name)];
             (yyval.node) = new Load((yyvsp[0].name), val, true, reads); 
        } 
        else if (memory_int.count((yyvsp[0].name))) {
             (yyval.node) = new Load((yyvsp[0].name), memory_int[(yyvsp[0].name)], true, reads);
        } 
        else {
             (yyval.node) = new Load((yyvsp[0].name));
        }
    } 
    else {
        (yyval.node) = new ConstString((yyvsp[0].name));
    }
}
#line 1957 "sintatico.tab.c"
    break;

  case 51: /* val: IDENT ']' indice '['  */
#line 296 "sintatico.y"
                                    { 
    (yyval.node) = new LoadVector((yyvsp[-3].name), (yyvsp[-1].node)); 
}
#line 1965 "sintatico.tab.c"
    break;

  case 52: /* read: READ_S '{' rdexpr '}' READ_E  */
#line 300 "sintatico.y"
                                         {
     (yyval.node) = new Read((yyvsp[-2].node));
}
#line 1973 "sintatico.tab.c"
    break;

  case 53: /* rdexpr: rditem  */
#line 304 "sintatico.y"
                     {
     (yyval.node) = new ReadSeq((yyvsp[0].node));
}
#line 1981 "sintatico.tab.c"
    break;

  case 54: /* rdexpr: rdexpr rditem  */
#line 308 "sintatico.y"
                                 {
     (yyvsp[-1].node)->append((yyvsp[0].node));  
     (yyval.node) = (yyvsp[-1].node);
}
#line 1990 "sintatico.tab.c"
    break;

  case 55: /* rditem: tpvar '@' IDENT  */
#line 313 "sintatico.y"
                                  {
     read_counts[(yyvsp[0].name)]++; 
     (yyval.node) = new ReadVar((yyvsp[-2].name), (yyvsp[0].name));
}
#line 1999 "sintatico.tab.c"
    break;

  case 56: /* rditem: tpvar '@' IDENT ']' indice '['  */
#line 318 "sintatico.y"
                                                      {
       read_counts[(yyvsp[-3].name)]++; 
       (yyval.node) = new ReadVector((yyvsp[-5].name), (yyvsp[-3].name), (yyvsp[-1].node));
}
#line 2008 "sintatico.tab.c"
    break;

  case 57: /* tpvar: DECL_IT  */
#line 323 "sintatico.y"
                {
     (yyval.name) = (char*)"int";
}
#line 2016 "sintatico.tab.c"
    break;

  case 58: /* tpvar: DECL_FT  */
#line 327 "sintatico.y"
                {
     (yyval.name) = (char*)"float";
}
#line 2024 "sintatico.tab.c"
    break;

  case 59: /* tpvar: DECL_ST  */
#line 331 "sintatico.y"
                {
     (yyval.name) = (char*)"string";
}
#line 2032 "sintatico.tab.c"
    break;

  case 60: /* show: SHOW_S '{' showLST '}' SHOW_E  */
#line 335 "sintatico.y"
                                            {
     (yyval.node) = new Print((yyvsp[-2].node));
}
#line 2040 "sintatico.tab.c"
    break;

  case 61: /* showLST: showITM  */
#line 339 "sintatico.y"
                        {
     (yyval.node) = new PrintSeq((yyvsp[0].node));
}
#line 2048 "sintatico.tab.c"
    break;

  case 62: /* showLST: showLST showITM  */
#line 343 "sintatico.y"
                                       {
     (yyvsp[-1].node)->append((yyvsp[0].node));    
     (yyval.node) = (yyvsp[-1].node);
}
#line 2057 "sintatico.tab.c"
    break;

  case 63: /* showITM: atstring  */
#line 348 "sintatico.y"
                        {
     (yyval.node) = (yyvsp[0].node); 
}
#line 2065 "sintatico.tab.c"
    break;

  case 64: /* showITM: varshow  */
#line 352 "sintatico.y"
                       {
     (yyval.node) = (yyvsp[0].node);
}
#line 2073 "sintatico.tab.c"
    break;

  case 65: /* varshow: '%' IDENT '\\'  */
#line 356 "sintatico.y"
                             {
     /* 1. Recupera quantas vezes a variável foi lida */
     int reads = read_counts[(yyvsp[-1].name)]; 

     if (memory_string.count((yyvsp[-1].name))) {
          /* 2. Passa 'reads' como o 4º argumento */
          (yyval.node) = new Load((yyvsp[-1].name), memory_string[(yyvsp[-1].name)], true, reads);
     }
     else if (memory_float.count((yyvsp[-1].name))) {
          double val = memory_float[(yyvsp[-1].name)];
          (yyval.node) = new Load((yyvsp[-1].name), val, true, reads);
     }
     else if (memory_int.count((yyvsp[-1].name))) {
          (yyval.node) = new Load((yyvsp[-1].name), memory_int[(yyvsp[-1].name)], true, reads);
     } 
     else if (memory_bool.count((yyvsp[-1].name))) {
          bool val = memory_bool[(yyvsp[-1].name)];
          (yyval.node) = new Load((yyvsp[-1].name), val, true, reads);
     }
     else {
          /* Mesmo sem valor, passamos o reads */
          (yyval.node) = new Load((yyvsp[-1].name), 0, false, reads);
     }
}
#line 2102 "sintatico.tab.c"
    break;

  case 66: /* varshow: '%' IDENT ']' atstring '[' '\\'  */
#line 381 "sintatico.y"
                                                   {
     int idx = (yyvsp[-2].node)->getIntValue();
     int reads = read_counts[(yyvsp[-4].name)]; // Pega contagem de leituras

     // 1. Verifica String
     if (memory_vector_string.count((yyvsp[-4].name)) && memory_vector_string[(yyvsp[-4].name)].count(idx)) {
          string val = memory_vector_string[(yyvsp[-4].name)][idx];
          // Passa: nome, indice, idxVal, VALOR, true (info), reads
          (yyval.node) = new LoadVector((yyvsp[-4].name), (yyvsp[-2].node), idx, val, true, reads);
     }
     // 2. Verifica Int
     else if (memory_vector_int.count((yyvsp[-4].name)) && memory_vector_int[(yyvsp[-4].name)].count(idx)) {
          int val = memory_vector_int[(yyvsp[-4].name)][idx];
          // Passa o valor recuperado!
          (yyval.node) = new LoadVector((yyvsp[-4].name), (yyvsp[-2].node), idx, val, true, reads);
     }
     // 3. Verifica Float
     else if (memory_vector_float.count((yyvsp[-4].name)) && memory_vector_float[(yyvsp[-4].name)].count(idx)) {
          double val = memory_vector_float[(yyvsp[-4].name)][idx];
          (yyval.node) = new LoadVector((yyvsp[-4].name), (yyvsp[-2].node), idx, val, true, reads);
     }
     // 4. Verifica Bool
     else if (memory_vector_bool.count((yyvsp[-4].name)) && memory_vector_bool[(yyvsp[-4].name)].count(idx)) {
          bool val = memory_vector_bool[(yyvsp[-4].name)][idx];
          (yyval.node) = new LoadVector((yyvsp[-4].name), (yyvsp[-2].node), idx, val, true, reads);
     }
     // 5. Default (Sem valor conhecido, apenas reads)
     else {
          (yyval.node) = new LoadVector((yyvsp[-4].name), (yyvsp[-2].node), idx, 0, false, reads);
     }
}
#line 2138 "sintatico.tab.c"
    break;

  case 67: /* atstring: IDENT  */
#line 413 "sintatico.y"
                     {
     (yyval.node) = new ConstString((yyvsp[0].name)); 
}
#line 2146 "sintatico.tab.c"
    break;

  case 68: /* atstring: INTEGER  */
#line 417 "sintatico.y"
                        {
     (yyval.node) = new ConstInteger((yyvsp[0].integer));
}
#line 2154 "sintatico.tab.c"
    break;

  case 69: /* atstring: '='  */
#line 421 "sintatico.y"
               {
     (yyval.node) = new ConstString("=");
}
#line 2162 "sintatico.tab.c"
    break;

  case 70: /* atstring: '@'  */
#line 425 "sintatico.y"
               {
     (yyval.node) = new ConstString("@");
}
#line 2170 "sintatico.tab.c"
    break;

  case 71: /* atstring: ';'  */
#line 429 "sintatico.y"
               {
     (yyval.node) = new ConstString(";");
}
#line 2178 "sintatico.tab.c"
    break;

  case 72: /* atstring: ':'  */
#line 433 "sintatico.y"
               {
     (yyval.node) = new ConstString(":");
}
#line 2186 "sintatico.tab.c"
    break;

  case 73: /* atstring: '('  */
#line 438 "sintatico.y"
               {
     (yyval.node) = new ConstString("(");
}
#line 2194 "sintatico.tab.c"
    break;

  case 74: /* atstring: ')'  */
#line 442 "sintatico.y"
               {
     (yyval.node) = new ConstString(")");
}
#line 2202 "sintatico.tab.c"
    break;

  case 75: /* atstring: '{'  */
#line 446 "sintatico.y"
               {
     (yyval.node) = new ConstString("{");
}
#line 2210 "sintatico.tab.c"
    break;

  case 76: /* atstring: '}'  */
#line 450 "sintatico.y"
               {
     (yyval.node) = new ConstString("}");
}
#line 2218 "sintatico.tab.c"
    break;

  case 77: /* atstring: '['  */
#line 454 "sintatico.y"
               {
     (yyval.node) = new ConstString("[");
}
#line 2226 "sintatico.tab.c"
    break;

  case 78: /* atstring: ']'  */
#line 458 "sintatico.y"
               {
     (yyval.node) = new ConstString("]");
}
#line 2234 "sintatico.tab.c"
    break;

  case 79: /* atstring: '+'  */
#line 462 "sintatico.y"
               {
     (yyval.node) = new ConstString("+");
}
#line 2242 "sintatico.tab.c"
    break;

  case 80: /* atstring: '-'  */
#line 466 "sintatico.y"
               {
     (yyval.node) = new ConstString("-");
}
#line 2250 "sintatico.tab.c"
    break;

  case 81: /* atstring: '*'  */
#line 470 "sintatico.y"
               {
     (yyval.node) = new ConstString("*");
}
#line 2258 "sintatico.tab.c"
    break;

  case 82: /* atstring: '/'  */
#line 474 "sintatico.y"
               {
     (yyval.node) = new ConstString("/");
}
#line 2266 "sintatico.tab.c"
    break;

  case 83: /* indice: IDENT  */
#line 478 "sintatico.y"
                   {
       (yyval.node) = new Load((yyvsp[0].name));
}
#line 2274 "sintatico.tab.c"
    break;

  case 84: /* indice: INTEGER  */
#line 482 "sintatico.y"
                      {
     (yyval.node) = new ConstInteger((yyvsp[0].integer));
}
#line 2282 "sintatico.tab.c"
    break;

  case 85: /* arit: expr  */
#line 486 "sintatico.y"
            {
     (yyval.node) = (yyvsp[0].node); 
}
#line 2290 "sintatico.tab.c"
    break;

  case 86: /* expr: expr '+' term  */
#line 490 "sintatico.y"
                         {
     (yyval.node) = new BinaryOp((yyvsp[-2].node), '+', (yyvsp[0].node));
}
#line 2298 "sintatico.tab.c"
    break;

  case 87: /* expr: expr '-' term  */
#line 494 "sintatico.y"
                         {
     (yyval.node) = new BinaryOp((yyvsp[-2].node), '-', (yyvsp[0].node));
}
#line 2306 "sintatico.tab.c"
    break;

  case 88: /* expr: term  */
#line 498 "sintatico.y"
            {
     (yyval.node) = (yyvsp[0].node);
}
#line 2314 "sintatico.tab.c"
    break;

  case 89: /* term: term '*' factor  */
#line 502 "sintatico.y"
                           {
     (yyval.node) = new BinaryOp((yyvsp[-2].node), '*', (yyvsp[0].node));
}
#line 2322 "sintatico.tab.c"
    break;

  case 90: /* term: term '/' factor  */
#line 506 "sintatico.y"
                           {
     (yyval.node) = new BinaryOp((yyvsp[-2].node), '/', (yyvsp[0].node));
}
#line 2330 "sintatico.tab.c"
    break;

  case 91: /* term: factor  */
#line 510 "sintatico.y"
              {
     (yyval.node) = (yyvsp[0].node);
}
#line 2338 "sintatico.tab.c"
    break;

  case 92: /* factor: '(' expr ')'  */
#line 514 "sintatico.y"
                     {
     (yyval.node) = (yyvsp[-1].node);
}
#line 2346 "sintatico.tab.c"
    break;

  case 93: /* factor: FLOAT  */
#line 518 "sintatico.y"
                    {
     (yyval.node) = new ConstDouble((yyvsp[0].flt));
}
#line 2354 "sintatico.tab.c"
    break;

  case 94: /* factor: INTEGER  */
#line 522 "sintatico.y"
                     {
     (yyval.node) = new ConstInteger((yyvsp[0].integer));
}
#line 2362 "sintatico.tab.c"
    break;

  case 95: /* factor: IDENT  */
#line 526 "sintatico.y"
                   {
    if (declared_vars.count((yyvsp[0].name))) {
        if (memory_string.count((yyvsp[0].name))) {
             (yyval.node) = new Load((yyvsp[0].name), memory_string[(yyvsp[0].name)], true);
        }
        else if (memory_float.count((yyvsp[0].name))) {
             double val = memory_float[(yyvsp[0].name)];
             (yyval.node) = new Load((yyvsp[0].name), val, true);
        }
        else if (memory_int.count((yyvsp[0].name))) {
             (yyval.node) = new Load((yyvsp[0].name), memory_int[(yyvsp[0].name)], true);
        } 
        else {
             (yyval.node) = new Load((yyvsp[0].name));
        }
    } 
    else {
        (yyval.node) = new ConstString((yyvsp[0].name));
    }
}
#line 2387 "sintatico.tab.c"
    break;

  case 96: /* factor: IDENT ']' indice '['  */
#line 547 "sintatico.y"
                                     {
     int indexVal = (yyvsp[-1].node)->getIntValue();
     
     if (memory_vector_string.count((yyvsp[-3].name)) && memory_vector_string[(yyvsp[-3].name)].count(indexVal)) {
          string val = memory_vector_string[(yyvsp[-3].name)][indexVal];
          (yyval.node) = new LoadVector((yyvsp[-3].name), (yyvsp[-1].node), indexVal, val, true);
     }
     else if (memory_vector_float.count((yyvsp[-3].name)) && memory_vector_float[(yyvsp[-3].name)].count(indexVal)) {
          double val = memory_vector_float[(yyvsp[-3].name)][indexVal];
          (yyval.node) = new LoadVector((yyvsp[-3].name), (yyvsp[-1].node), indexVal, val, true);
     }
     else if (memory_vector_int.count((yyvsp[-3].name)) && memory_vector_int[(yyvsp[-3].name)].count(indexVal)) {
          int val = memory_vector_int[(yyvsp[-3].name)][indexVal];
          (yyval.node) = new LoadVector((yyvsp[-3].name), (yyvsp[-1].node), indexVal, val, true);
     } 
     else {
          (yyval.node) = new LoadVector((yyvsp[-3].name), (yyvsp[-1].node));
     }
}
#line 2411 "sintatico.tab.c"
    break;


#line 2415 "sintatico.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 567 "sintatico.y"

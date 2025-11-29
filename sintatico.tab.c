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

std::map<std::string, bool> memory_bool;
std::map<std::string, std::map<int, bool>> memory_vector_bool;

std::map<std::string, int> read_counts;
std::map<std::string, int> loop_change_counts;

std::set<std::string> declared_vars;
std::set<std::string> declared_floats;

int inside_loop = 0;


#line 101 "sintatico.tab.c"

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
  YYSYMBOL_safeblock = 55,                 /* safeblock  */
  YYSYMBOL_56_1 = 56,                      /* $@1  */
  YYSYMBOL_loop = 57,                      /* loop  */
  YYSYMBOL_if = 58,                        /* if  */
  YYSYMBOL_comblock = 59,                  /* comblock  */
  YYSYMBOL_exprlog = 60,                   /* exprlog  */
  YYSYMBOL_termlog = 61,                   /* termlog  */
  YYSYMBOL_faclog = 62,                    /* faclog  */
  YYSYMBOL_comp = 63,                      /* comp  */
  YYSYMBOL_perexpr = 64,                   /* perexpr  */
  YYSYMBOL_cmpl = 65,                      /* cmpl  */
  YYSYMBOL_val = 66,                       /* val  */
  YYSYMBOL_read = 67,                      /* read  */
  YYSYMBOL_rdexpr = 68,                    /* rdexpr  */
  YYSYMBOL_rditem = 69,                    /* rditem  */
  YYSYMBOL_tpvar = 70,                     /* tpvar  */
  YYSYMBOL_show = 71,                      /* show  */
  YYSYMBOL_showLST = 72,                   /* showLST  */
  YYSYMBOL_showITM = 73,                   /* showITM  */
  YYSYMBOL_varshow = 74,                   /* varshow  */
  YYSYMBOL_atstring = 75,                  /* atstring  */
  YYSYMBOL_indice = 76,                    /* indice  */
  YYSYMBOL_arit = 77,                      /* arit  */
  YYSYMBOL_expr = 78,                      /* expr  */
  YYSYMBOL_term = 79,                      /* term  */
  YYSYMBOL_factor = 80                     /* factor  */
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
#define YYLAST   217

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

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
       0,    54,    54,    63,    68,    72,    73,    74,    75,    76,
      77,    78,    81,    86,    91,    97,   102,   107,   113,   118,
     123,   144,   154,   164,   189,   201,   212,   212,   214,   218,
     222,   226,   230,   234,   239,   243,   247,   251,   255,   259,
     263,   267,   271,   275,   279,   283,   287,   291,   295,   299,
     303,   307,   311,   335,   339,   343,   347,   352,   357,   362,
     366,   370,   374,   378,   382,   387,   391,   395,   418,   444,
     448,   452,   456,   460,   464,   469,   473,   477,   481,   485,
     489,   493,   497,   501,   505,   509,   513,   517,   521,   525,
     529,   533,   537,   541,   545,   549,   553,   557,   581
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
  "decl", "atrib", "safeblock", "$@1", "loop", "if", "comblock", "exprlog",
  "termlog", "faclog", "comp", "perexpr", "cmpl", "val", "read", "rdexpr",
  "rditem", "tpvar", "show", "showLST", "showITM", "varshow", "atstring",
  "indice", "arit", "expr", "term", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-140)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      66,   -36,   -27,   -10,    -2,     4,    53,   123,    18,  -140,
    -140,    59,   155,    26,    66,  -140,  -140,  -140,  -140,  -140,
    -140,  -140,  -140,    22,    31,  -140,    47,    75,    24,    28,
      39,  -140,  -140,    43,    53,     8,    55,  -140,  -140,    64,
    -140,    65,    14,    62,    15,   120,    69,    12,  -140,  -140,
     155,   155,   155,   155,  -140,  -140,  -140,     3,  -140,    70,
    -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,    74,  -140,  -140,  -140,  -140,  -140,    98,  -140,  -140,
    -140,    89,    97,    99,    15,    -5,    53,   122,    53,  -140,
    -140,  -140,  -140,  -140,  -140,    53,   127,   136,   144,  -140,
    -140,   154,  -140,  -140,  -140,    15,  -140,    31,    31,  -140,
    -140,   184,  -140,   125,    10,   185,  -140,   158,   160,   161,
     162,  -140,    55,    66,  -140,  -140,   165,  -140,   164,   166,
     168,  -140,   167,   130,  -140,  -140,  -140,  -140,  -140,  -140,
    -140,     1,   189,    -8,    66,  -140,   152,  -140,    15,   169,
     186,  -140,   187,   170,  -140,    66,  -140,  -140,  -140,   171,
     172,    66,   173,  -140,  -140,  -140,    33,  -140,  -140,   174,
    -140
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      95,    97,     0,     0,     2,     4,    11,     5,     9,     6,
       8,     7,    10,    87,    90,    93,     0,     0,    16,    17,
      19,    50,    51,    52,     0,     0,    35,    37,    40,    39,
      42,    50,     0,    18,     0,     0,    97,     0,     1,     3,
       0,     0,     0,     0,    59,    60,    61,     0,    55,     0,
      70,    69,    80,    79,    71,    74,    75,    76,    77,    78,
      72,     0,    73,    81,    82,    83,    84,     0,    63,    66,
      65,     0,     0,     0,     0,     0,     0,     0,     0,    48,
      47,    44,    49,    45,    46,     0,     0,     0,     0,    86,
      85,     0,    22,    21,    20,     0,    94,    88,    89,    91,
      92,     0,    56,     0,     0,    78,    64,     0,     0,     0,
       0,    43,    36,     0,    38,    41,     0,    26,     0,    98,
       0,    54,    57,     0,    67,    62,    12,    14,    13,    53,
      34,     0,     0,     0,     0,    15,     0,    98,     0,     0,
      31,    33,     0,     0,    29,    27,    25,    24,    23,     0,
       0,     0,     0,    30,    58,    68,     0,    26,    32,     0,
      28
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -140,  -140,  -140,     0,  -140,  -140,    38,  -140,  -140,  -140,
    -139,    11,   126,   128,  -140,   113,  -140,  -140,  -140,  -140,
     156,  -140,  -140,  -140,   134,  -140,    81,   -82,   -44,   205,
      48,    72
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    13,    14,   140,    16,    17,   143,   144,    18,    19,
     141,    35,    36,    37,    38,    39,    95,    40,    20,    57,
      58,    59,    21,    77,    78,    79,    80,   101,    22,    23,
      24,    25
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      15,   104,   120,    26,     1,   155,    86,     2,     3,     4,
      54,    55,    27,   153,    49,     5,     6,    56,    42,    86,
       7,    28,   166,   130,    87,    86,    48,     8,   154,    29,
       9,    10,    11,   121,    97,    30,     1,   150,    12,     2,
       3,     4,   133,   111,    99,    85,   100,     5,     6,    43,
     106,   168,     7,   134,    54,    55,    81,    50,    51,     8,
      82,    56,     9,    10,    11,    88,   159,    50,    51,     1,
      12,    83,     2,     3,     4,    84,    89,    90,    52,    53,
       5,     6,    31,    32,    33,     7,    91,    92,    93,    94,
      34,    44,     8,    45,    98,     9,    10,    11,   107,   108,
      96,   105,   158,    12,    60,   114,    61,    62,    63,    64,
      65,   113,    66,    67,    68,    69,    70,    71,   117,    72,
      73,    74,    75,    76,   109,   110,   118,    60,   119,    61,
      62,    63,    64,    65,   126,    66,    67,    68,   115,    70,
      71,   151,    72,    73,    74,    75,    76,   102,   103,     9,
      10,    46,    41,    32,    33,   151,   132,    12,   123,    60,
      34,    61,    62,    63,    64,    65,   151,    66,    67,    68,
      69,    70,   127,   128,    72,    73,    74,    75,    76,   156,
     157,     9,    10,    46,     9,    10,    46,   129,   131,    12,
     135,   136,    12,   137,   138,   139,   142,   145,   152,   148,
     146,   147,   160,   161,   164,   169,   163,   162,   125,   167,
     170,   116,   122,   112,   149,   165,   124,    47
};

static const yytype_uint8 yycheck[] =
{
       0,    45,    84,    39,     3,   144,    11,     6,     7,     8,
       7,     8,    39,    21,    14,    14,    15,    14,     7,    11,
      19,    31,   161,   105,    16,    11,     0,    26,    36,    31,
      29,    30,    31,    38,    20,    31,     3,    36,    37,     6,
       7,     8,    32,    40,    29,    34,    31,    14,    15,    31,
      38,    18,    19,    43,     7,     8,    32,    45,    46,    26,
      32,    14,    29,    30,    31,    10,   148,    45,    46,     3,
      37,    32,     6,     7,     8,    32,    12,    13,    47,    48,
      14,    15,    29,    30,    31,    19,    22,    23,    24,    25,
      37,    32,    26,    34,    32,    29,    30,    31,    50,    51,
      35,    32,   146,    37,    29,    31,    31,    32,    33,    34,
      35,    41,    37,    38,    39,    40,    41,    42,    29,    44,
      45,    46,    47,    48,    52,    53,    29,    29,    29,    31,
      32,    33,    34,    35,     7,    37,    38,    39,    40,    41,
      42,   141,    44,    45,    46,    47,    48,    27,    28,    29,
      30,    31,    29,    30,    31,   155,    31,    37,    36,    29,
      37,    31,    32,    33,    34,    35,   166,    37,    38,    39,
      40,    41,    36,    29,    44,    45,    46,    47,    48,    27,
      28,    29,    30,    31,    29,    30,    31,    33,     4,    37,
       5,    33,    37,    33,    33,    33,    31,    33,     9,    32,
      34,    33,    33,    17,    33,   167,    36,    20,    95,    36,
      36,    77,    86,    57,   133,    43,    88,    12
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,     7,     8,    14,    15,    19,    26,    29,
      30,    31,    37,    50,    51,    52,    53,    54,    57,    58,
      67,    71,    77,    78,    79,    80,    39,    39,    31,    31,
      31,    29,    30,    31,    37,    60,    61,    62,    63,    64,
      66,    29,    60,    31,    32,    34,    31,    78,     0,    52,
      45,    46,    47,    48,     7,     8,    14,    68,    69,    70,
      29,    31,    32,    33,    34,    35,    37,    38,    39,    40,
      41,    42,    44,    45,    46,    47,    48,    72,    73,    74,
      75,    32,    32,    32,    32,    60,    11,    16,    10,    12,
      13,    22,    23,    24,    25,    65,    35,    20,    32,    29,
      31,    76,    27,    28,    77,    32,    38,    79,    79,    80,
      80,    40,    69,    41,    31,    40,    73,    29,    29,    29,
      76,    38,    61,    36,    62,    64,     7,    36,    29,    33,
      76,     4,    31,    32,    43,     5,    33,    33,    33,    33,
      52,    59,    31,    55,    56,    33,    34,    33,    32,    75,
      36,    52,     9,    21,    36,    59,    27,    28,    77,    76,
      33,    17,    20,    36,    33,    43,    59,    36,    18,    55,
      36
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    53,    53,    53,    53,    53,    53,    53,    53,
      54,    54,    54,    54,    54,    54,    56,    55,    57,    57,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    62,
      62,    63,    64,    64,    65,    65,    65,    65,    65,    65,
      66,    66,    66,    66,    67,    68,    68,    69,    69,    70,
      70,    70,    71,    72,    72,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    76,    76,    77,    78,    78,
      78,    79,    79,    79,    80,    80,    80,    80,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     5,     5,     5,     2,     2,     2,     2,
       3,     3,     3,     6,     6,     6,     0,     2,    10,     6,
       7,     6,     9,     2,     1,     1,     3,     1,     3,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     5,     1,     2,     3,     6,     1,
       1,     1,     5,     1,     2,     1,     1,     3,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     3,     3,     1,     3,     1,     1,     1,     4
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
#line 54 "sintatico.y"
             {    
     Program pg((yyvsp[0].node));
     pg.printAST();

     SemanticVarDecl vd;
     vd.check(&pg);
     vd.printFoundVars();
}
#line 1569 "sintatico.tab.c"
    break;

  case 3: /* stmts: stmts stmt  */
#line 63 "sintatico.y"
                       {
     (yyvsp[-1].node)->append((yyvsp[0].node));
     (yyval.node) = (yyvsp[-1].node);
}
#line 1578 "sintatico.tab.c"
    break;

  case 4: /* stmts: stmt  */
#line 68 "sintatico.y"
             {
     (yyval.node) = new Stmts((yyvsp[0].node));
}
#line 1586 "sintatico.tab.c"
    break;

  case 12: /* decl: DECL_IT IDENT ']' INTEGER '['  */
#line 81 "sintatico.y"
                                                 {
     declared_vars.insert((yyvsp[-3].name));
     (yyval.node) = new VectorDecl((yyvsp[-3].name), (yyvsp[-1].integer), "int");
}
#line 1595 "sintatico.tab.c"
    break;

  case 13: /* decl: DECL_ST IDENT ']' INTEGER '['  */
#line 86 "sintatico.y"
                                                 {
     declared_vars.insert((yyvsp[-3].name));
     (yyval.node) = new VectorDecl((yyvsp[-3].name), (yyvsp[-1].integer), "string");
}
#line 1604 "sintatico.tab.c"
    break;

  case 14: /* decl: DECL_FT IDENT ']' INTEGER '['  */
#line 91 "sintatico.y"
                                                 {
     declared_floats.insert((yyvsp[-3].name));
     declared_vars.insert((yyvsp[-3].name));
     (yyval.node) = new VectorDecl((yyvsp[-3].name), (yyvsp[-1].integer), "float");
}
#line 1614 "sintatico.tab.c"
    break;

  case 15: /* decl: DECL_BL IDENT ']' INTEGER '['  */
#line 97 "sintatico.y"
                                                 {
     declared_vars.insert((yyvsp[-3].name));
     (yyval.node) = new VectorDecl((yyvsp[-3].name), (yyvsp[-1].integer), "boolean");
}
#line 1623 "sintatico.tab.c"
    break;

  case 16: /* decl: DECL_IT IDENT  */
#line 102 "sintatico.y"
                           {
     declared_vars.insert((yyvsp[0].name));
     (yyval.node) = new VarDecl((yyvsp[0].name), "int");
}
#line 1632 "sintatico.tab.c"
    break;

  case 17: /* decl: DECL_FT IDENT  */
#line 107 "sintatico.y"
                           {
     declared_floats.insert((yyvsp[0].name));
     declared_vars.insert((yyvsp[0].name));
     (yyval.node) = new VarDecl((yyvsp[0].name), "float");
}
#line 1642 "sintatico.tab.c"
    break;

  case 18: /* decl: DECL_BL IDENT  */
#line 113 "sintatico.y"
                           {
     declared_vars.insert((yyvsp[0].name));
     (yyval.node) = new VarDecl((yyvsp[0].name), "bool");
}
#line 1651 "sintatico.tab.c"
    break;

  case 19: /* decl: DECL_ST IDENT  */
#line 118 "sintatico.y"
                           {
     declared_vars.insert((yyvsp[0].name));
     (yyval.node) = new VarDecl((yyvsp[0].name), "string");
}
#line 1660 "sintatico.tab.c"
    break;

  case 20: /* atrib: IDENT '=' arit  */
#line 123 "sintatico.y"
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

     if (inside_loop > 0) {
          loop_change_counts[(yyvsp[-2].name)]++;
     }

     (yyval.node) = new Store((yyvsp[-2].name), (yyvsp[0].node));
}
#line 1685 "sintatico.tab.c"
    break;

  case 21: /* atrib: IDENT '=' BOOL_T  */
#line 144 "sintatico.y"
                             {
     memory_bool[(yyvsp[-2].name)] = true; 
     
     if (inside_loop > 0) {
          loop_change_counts[(yyvsp[-2].name)]++;
     }

     (yyval.node) = new Store((yyvsp[-2].name), new ConstBoolean(true));
}
#line 1699 "sintatico.tab.c"
    break;

  case 22: /* atrib: IDENT '=' BOOL_F  */
#line 154 "sintatico.y"
                             {
     memory_bool[(yyvsp[-2].name)] = false; 
     
     if (inside_loop > 0) {
          loop_change_counts[(yyvsp[-2].name)]++;
     }

     (yyval.node) = new Store((yyvsp[-2].name), new ConstBoolean(false));
}
#line 1713 "sintatico.tab.c"
    break;

  case 23: /* atrib: IDENT ']' indice '[' '=' arit  */
#line 164 "sintatico.y"
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

     if (inside_loop > 0) {
          loop_change_counts[(yyvsp[-5].name)]++;
     }
     (yyval.node) = new StoreVector((yyvsp[-5].name), (yyvsp[-3].node), (yyvsp[0].node), indexVal, true);
}
#line 1742 "sintatico.tab.c"
    break;

  case 24: /* atrib: IDENT ']' indice '[' '=' BOOL_T  */
#line 189 "sintatico.y"
                                               {
     int indexVal = (yyvsp[-3].node)->getIntValue();
     memory_vector_bool[(yyvsp[-5].name)][indexVal] = true;

     if (inside_loop > 0) {
          loop_change_counts[(yyvsp[-5].name)]++;
     }
     
     (yyval.node) = new StoreVector((yyvsp[-5].name), (yyvsp[-3].node), new ConstBoolean(true), indexVal, true);
}
#line 1757 "sintatico.tab.c"
    break;

  case 25: /* atrib: IDENT ']' indice '[' '=' BOOL_F  */
#line 201 "sintatico.y"
                                               {
     int indexVal = (yyvsp[-3].node)->getIntValue();
     memory_vector_bool[(yyvsp[-5].name)][indexVal] = false;

     if (inside_loop > 0) {
          loop_change_counts[(yyvsp[-5].name)]++;
     }
     
     (yyval.node) = new StoreVector((yyvsp[-5].name), (yyvsp[-3].node), new ConstBoolean(false), indexVal, true);
}
#line 1772 "sintatico.tab.c"
    break;

  case 26: /* $@1: %empty  */
#line 212 "sintatico.y"
            { inside_loop++; }
#line 1778 "sintatico.tab.c"
    break;

  case 27: /* safeblock: $@1 comblock  */
#line 212 "sintatico.y"
                                            { inside_loop--; (yyval.node) = (yyvsp[0].node); }
#line 1784 "sintatico.tab.c"
    break;

  case 28: /* loop: LOOP_S INTEGER ':' DECL_IT IDENT ICR LOOP_E '|' safeblock '|'  */
#line 214 "sintatico.y"
                                                                                  {
     (yyval.node) = new ForStmt((yyvsp[-8].integer), (yyvsp[-5].name), (yyvsp[-1].node));
}
#line 1792 "sintatico.tab.c"
    break;

  case 29: /* loop: LOOP_S exprlog LOOP_E '|' safeblock '|'  */
#line 218 "sintatico.y"
                                                        {
     (yyval.node) = new LoopStmt((yyvsp[-4].node), (yyvsp[-1].node));
}
#line 1800 "sintatico.tab.c"
    break;

  case 30: /* loop: LOOP_S exprlog LOOP_E '|' safeblock LOOP_P '|'  */
#line 222 "sintatico.y"
                                                                {
     (yyval.node) = new LoopStmt((yyvsp[-5].node), (yyvsp[-2].node));
}
#line 1808 "sintatico.tab.c"
    break;

  case 31: /* if: IF_S exprlog IF_E '|' comblock '|'  */
#line 226 "sintatico.y"
                                                  {
   (yyval.node) = new IfStmt((yyvsp[-4].node), (yyvsp[-1].node));
}
#line 1816 "sintatico.tab.c"
    break;

  case 32: /* if: IF_S exprlog IF_E '|' comblock '|' ELSE_S comblock ELSE_E  */
#line 230 "sintatico.y"
                                                                             {
   (yyval.node) = new IfStmt((yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-1].node));
}
#line 1824 "sintatico.tab.c"
    break;

  case 33: /* comblock: comblock stmt  */
#line 234 "sintatico.y"
                              {
     (yyvsp[-1].node)->append((yyvsp[0].node));
     (yyval.node) = (yyvsp[-1].node);
}
#line 1833 "sintatico.tab.c"
    break;

  case 34: /* comblock: stmt  */
#line 239 "sintatico.y"
                {
     (yyval.node) = new Stmts((yyvsp[0].node));
}
#line 1841 "sintatico.tab.c"
    break;

  case 35: /* exprlog: termlog  */
#line 243 "sintatico.y"
                       { 
     (yyval.node) = (yyvsp[0].node);
}
#line 1849 "sintatico.tab.c"
    break;

  case 36: /* exprlog: exprlog CMP_OR termlog  */
#line 247 "sintatico.y"
                                         {
     (yyval.node) = new CompOp((yyvsp[-2].node), "OU", (yyvsp[0].node));
}
#line 1857 "sintatico.tab.c"
    break;

  case 37: /* termlog: faclog  */
#line 251 "sintatico.y"
                      { 
     (yyval.node) = (yyvsp[0].node); 
}
#line 1865 "sintatico.tab.c"
    break;

  case 38: /* termlog: termlog CMP_AND faclog  */
#line 255 "sintatico.y"
                                         {
     (yyval.node) = new CompOp((yyvsp[-2].node), "E", (yyvsp[0].node));
}
#line 1873 "sintatico.tab.c"
    break;

  case 39: /* faclog: perexpr  */
#line 259 "sintatico.y"
                      { 
     (yyval.node) = (yyvsp[0].node); 
}
#line 1881 "sintatico.tab.c"
    break;

  case 40: /* faclog: comp  */
#line 263 "sintatico.y"
                   { 
     (yyval.node) = (yyvsp[0].node);
}
#line 1889 "sintatico.tab.c"
    break;

  case 41: /* comp: perexpr cmpl perexpr  */
#line 267 "sintatico.y"
                                        {
     (yyval.node) = new CompOp((yyvsp[-2].node), (yyvsp[-1].name), (yyvsp[0].node));
}
#line 1897 "sintatico.tab.c"
    break;

  case 42: /* perexpr: val  */
#line 271 "sintatico.y"
                  { 
     (yyval.node) = (yyvsp[0].node); 
}
#line 1905 "sintatico.tab.c"
    break;

  case 43: /* perexpr: '(' exprlog ')'  */
#line 275 "sintatico.y"
                               { 
     (yyval.node) = (yyvsp[-1].node); 
}
#line 1913 "sintatico.tab.c"
    break;

  case 44: /* cmpl: CMP_MAQ  */
#line 279 "sintatico.y"
               { 
     (yyval.name) = (char*)"MAIOR_QUE"; 
}
#line 1921 "sintatico.tab.c"
    break;

  case 45: /* cmpl: CMP_MEQ  */
#line 283 "sintatico.y"
               { 
     (yyval.name) = (char*)"MENOR_QUE"; 
}
#line 1929 "sintatico.tab.c"
    break;

  case 46: /* cmpl: CMP_IG  */
#line 287 "sintatico.y"
               { 
     (yyval.name) = (char*)"IGUAL_A"; 
}
#line 1937 "sintatico.tab.c"
    break;

  case 47: /* cmpl: CMP_MAI  */
#line 291 "sintatico.y"
               { 
     (yyval.name) = (char*)"MAIOR_OU_IGUAL_A"; 
}
#line 1945 "sintatico.tab.c"
    break;

  case 48: /* cmpl: CMP_MEI  */
#line 295 "sintatico.y"
               { 
     (yyval.name) = (char*)"MENOR_OU_IGUAL_A"; 
}
#line 1953 "sintatico.tab.c"
    break;

  case 49: /* cmpl: CMP_DIF  */
#line 299 "sintatico.y"
               { 
     (yyval.name) = (char*)"DIFERENTE_DE"; 
}
#line 1961 "sintatico.tab.c"
    break;

  case 50: /* val: INTEGER  */
#line 303 "sintatico.y"
                 { 
    (yyval.node) = new ConstInteger((yyvsp[0].integer)); 
}
#line 1969 "sintatico.tab.c"
    break;

  case 51: /* val: FLOAT  */
#line 307 "sintatico.y"
               { 
    (yyval.node) = new ConstDouble((yyvsp[0].flt)); 
}
#line 1977 "sintatico.tab.c"
    break;

  case 52: /* val: IDENT  */
#line 311 "sintatico.y"
                { 
    int reads = read_counts[(yyvsp[0].name)];
    int loops = loop_change_counts[(yyvsp[0].name)];
    
    if (declared_vars.count((yyvsp[0].name))) {
        if (memory_int.count((yyvsp[0].name))) {
             (yyval.node) = new Load((yyvsp[0].name), memory_int[(yyvsp[0].name)], true, reads, loops);
        }
        else if (memory_float.count((yyvsp[0].name))) {
             double val = memory_float[(yyvsp[0].name)];
             (yyval.node) = new Load((yyvsp[0].name), val, true, reads, loops); 
        } 
        else if (memory_int.count((yyvsp[0].name))) {
             (yyval.node) = new Load((yyvsp[0].name), memory_int[(yyvsp[0].name)], true, reads, loops);
        } 
        else {
             (yyval.node) = new Load((yyvsp[0].name), 0, false, reads, loops);
        }
    } 
    else {
        (yyval.node) = new ConstString((yyvsp[0].name));
    }
}
#line 2005 "sintatico.tab.c"
    break;

  case 53: /* val: IDENT ']' indice '['  */
#line 335 "sintatico.y"
                                    { 
    (yyval.node) = new LoadVector((yyvsp[-3].name), (yyvsp[-1].node)); 
}
#line 2013 "sintatico.tab.c"
    break;

  case 54: /* read: READ_S '{' rdexpr '}' READ_E  */
#line 339 "sintatico.y"
                                         {
     (yyval.node) = new Read((yyvsp[-2].node));
}
#line 2021 "sintatico.tab.c"
    break;

  case 55: /* rdexpr: rditem  */
#line 343 "sintatico.y"
                     {
     (yyval.node) = new ReadSeq((yyvsp[0].node));
}
#line 2029 "sintatico.tab.c"
    break;

  case 56: /* rdexpr: rdexpr rditem  */
#line 347 "sintatico.y"
                                 {
     (yyvsp[-1].node)->append((yyvsp[0].node));  
     (yyval.node) = (yyvsp[-1].node);
}
#line 2038 "sintatico.tab.c"
    break;

  case 57: /* rditem: tpvar '@' IDENT  */
#line 352 "sintatico.y"
                                  {
     read_counts[(yyvsp[0].name)]++; 
     (yyval.node) = new ReadVar((yyvsp[-2].name), (yyvsp[0].name));
}
#line 2047 "sintatico.tab.c"
    break;

  case 58: /* rditem: tpvar '@' IDENT ']' indice '['  */
#line 357 "sintatico.y"
                                                      {
       read_counts[(yyvsp[-3].name)]++; 
       (yyval.node) = new ReadVector((yyvsp[-5].name), (yyvsp[-3].name), (yyvsp[-1].node));
}
#line 2056 "sintatico.tab.c"
    break;

  case 59: /* tpvar: DECL_IT  */
#line 362 "sintatico.y"
                {
     (yyval.name) = (char*)"int";
}
#line 2064 "sintatico.tab.c"
    break;

  case 60: /* tpvar: DECL_FT  */
#line 366 "sintatico.y"
                {
     (yyval.name) = (char*)"float";
}
#line 2072 "sintatico.tab.c"
    break;

  case 61: /* tpvar: DECL_ST  */
#line 370 "sintatico.y"
                {
     (yyval.name) = (char*)"string";
}
#line 2080 "sintatico.tab.c"
    break;

  case 62: /* show: SHOW_S '{' showLST '}' SHOW_E  */
#line 374 "sintatico.y"
                                            {
     (yyval.node) = new Print((yyvsp[-2].node));
}
#line 2088 "sintatico.tab.c"
    break;

  case 63: /* showLST: showITM  */
#line 378 "sintatico.y"
                        {
     (yyval.node) = new PrintSeq((yyvsp[0].node));
}
#line 2096 "sintatico.tab.c"
    break;

  case 64: /* showLST: showLST showITM  */
#line 382 "sintatico.y"
                                       {
     (yyvsp[-1].node)->append((yyvsp[0].node));    
     (yyval.node) = (yyvsp[-1].node);
}
#line 2105 "sintatico.tab.c"
    break;

  case 65: /* showITM: atstring  */
#line 387 "sintatico.y"
                        {
     (yyval.node) = (yyvsp[0].node); 
}
#line 2113 "sintatico.tab.c"
    break;

  case 66: /* showITM: varshow  */
#line 391 "sintatico.y"
                       {
     (yyval.node) = (yyvsp[0].node);
}
#line 2121 "sintatico.tab.c"
    break;

  case 67: /* varshow: '%' IDENT '\\'  */
#line 395 "sintatico.y"
                             {
     int reads = read_counts[(yyvsp[-1].name)]; 
     int loops = loop_change_counts[(yyvsp[-1].name)];

     if (memory_string.count((yyvsp[-1].name))) {
          (yyval.node) = new Load((yyvsp[-1].name), memory_string[(yyvsp[-1].name)], true, reads, loops);
     }
     else if (memory_float.count((yyvsp[-1].name))) {
          double val = memory_float[(yyvsp[-1].name)];
          (yyval.node) = new Load((yyvsp[-1].name), val, true, reads, loops);
     }
     else if (memory_int.count((yyvsp[-1].name))) {
          (yyval.node) = new Load((yyvsp[-1].name), memory_int[(yyvsp[-1].name)], true, reads, loops);
     } 
     else if (memory_bool.count((yyvsp[-1].name))) {
          bool val = memory_bool[(yyvsp[-1].name)];
          (yyval.node) = new Load((yyvsp[-1].name), val, true, reads, loops);
     }
     else {
          (yyval.node) = new Load((yyvsp[-1].name), 0, false, reads, loops);
     }
}
#line 2148 "sintatico.tab.c"
    break;

  case 68: /* varshow: '%' IDENT ']' atstring '[' '\\'  */
#line 418 "sintatico.y"
                                                   {
     int idx = (yyvsp[-2].node)->getIntValue();
     int reads = read_counts[(yyvsp[-4].name)];
     int loops = loop_change_counts[(yyvsp[-4].name)];

     if (memory_vector_string.count((yyvsp[-4].name)) && memory_vector_string[(yyvsp[-4].name)].count(idx)) {
          string val = memory_vector_string[(yyvsp[-4].name)][idx];
          (yyval.node) = new LoadVector((yyvsp[-4].name), (yyvsp[-2].node), idx, val, true, reads, loops);
     }
     else if (memory_vector_int.count((yyvsp[-4].name)) && memory_vector_int[(yyvsp[-4].name)].count(idx)) {
          int val = memory_vector_int[(yyvsp[-4].name)][idx];
          (yyval.node) = new LoadVector((yyvsp[-4].name), (yyvsp[-2].node), idx, val, true, reads);
     }
     else if (memory_vector_float.count((yyvsp[-4].name)) && memory_vector_float[(yyvsp[-4].name)].count(idx)) {
          double val = memory_vector_float[(yyvsp[-4].name)][idx];
          (yyval.node) = new LoadVector((yyvsp[-4].name), (yyvsp[-2].node), idx, val, true, reads, loops);
     }
     else if (memory_vector_bool.count((yyvsp[-4].name)) && memory_vector_bool[(yyvsp[-4].name)].count(idx)) {
          bool val = memory_vector_bool[(yyvsp[-4].name)][idx];
          (yyval.node) = new LoadVector((yyvsp[-4].name), (yyvsp[-2].node), idx, val, true, reads, loops);
     }
     else {
          (yyval.node) = new LoadVector((yyvsp[-4].name), (yyvsp[-2].node), idx, 0, false, reads, loops);
     }
}
#line 2178 "sintatico.tab.c"
    break;

  case 69: /* atstring: IDENT  */
#line 444 "sintatico.y"
                     {
     (yyval.node) = new ConstString((yyvsp[0].name)); 
}
#line 2186 "sintatico.tab.c"
    break;

  case 70: /* atstring: INTEGER  */
#line 448 "sintatico.y"
                        {
     (yyval.node) = new ConstInteger((yyvsp[0].integer));
}
#line 2194 "sintatico.tab.c"
    break;

  case 71: /* atstring: '='  */
#line 452 "sintatico.y"
               {
     (yyval.node) = new ConstString("=");
}
#line 2202 "sintatico.tab.c"
    break;

  case 72: /* atstring: '@'  */
#line 456 "sintatico.y"
               {
     (yyval.node) = new ConstString("@");
}
#line 2210 "sintatico.tab.c"
    break;

  case 73: /* atstring: ';'  */
#line 460 "sintatico.y"
               {
     (yyval.node) = new ConstString(";");
}
#line 2218 "sintatico.tab.c"
    break;

  case 74: /* atstring: ':'  */
#line 464 "sintatico.y"
               {
     (yyval.node) = new ConstString(":");
}
#line 2226 "sintatico.tab.c"
    break;

  case 75: /* atstring: '('  */
#line 469 "sintatico.y"
               {
     (yyval.node) = new ConstString("(");
}
#line 2234 "sintatico.tab.c"
    break;

  case 76: /* atstring: ')'  */
#line 473 "sintatico.y"
               {
     (yyval.node) = new ConstString(")");
}
#line 2242 "sintatico.tab.c"
    break;

  case 77: /* atstring: '{'  */
#line 477 "sintatico.y"
               {
     (yyval.node) = new ConstString("{");
}
#line 2250 "sintatico.tab.c"
    break;

  case 78: /* atstring: '}'  */
#line 481 "sintatico.y"
               {
     (yyval.node) = new ConstString("}");
}
#line 2258 "sintatico.tab.c"
    break;

  case 79: /* atstring: '['  */
#line 485 "sintatico.y"
               {
     (yyval.node) = new ConstString("[");
}
#line 2266 "sintatico.tab.c"
    break;

  case 80: /* atstring: ']'  */
#line 489 "sintatico.y"
               {
     (yyval.node) = new ConstString("]");
}
#line 2274 "sintatico.tab.c"
    break;

  case 81: /* atstring: '+'  */
#line 493 "sintatico.y"
               {
     (yyval.node) = new ConstString("+");
}
#line 2282 "sintatico.tab.c"
    break;

  case 82: /* atstring: '-'  */
#line 497 "sintatico.y"
               {
     (yyval.node) = new ConstString("-");
}
#line 2290 "sintatico.tab.c"
    break;

  case 83: /* atstring: '*'  */
#line 501 "sintatico.y"
               {
     (yyval.node) = new ConstString("*");
}
#line 2298 "sintatico.tab.c"
    break;

  case 84: /* atstring: '/'  */
#line 505 "sintatico.y"
               {
     (yyval.node) = new ConstString("/");
}
#line 2306 "sintatico.tab.c"
    break;

  case 85: /* indice: IDENT  */
#line 509 "sintatico.y"
                   {
       (yyval.node) = new Load((yyvsp[0].name));
}
#line 2314 "sintatico.tab.c"
    break;

  case 86: /* indice: INTEGER  */
#line 513 "sintatico.y"
                      {
     (yyval.node) = new ConstInteger((yyvsp[0].integer));
}
#line 2322 "sintatico.tab.c"
    break;

  case 87: /* arit: expr  */
#line 517 "sintatico.y"
            {
     (yyval.node) = (yyvsp[0].node); 
}
#line 2330 "sintatico.tab.c"
    break;

  case 88: /* expr: expr '+' term  */
#line 521 "sintatico.y"
                         {
     (yyval.node) = new BinaryOp((yyvsp[-2].node), '+', (yyvsp[0].node));
}
#line 2338 "sintatico.tab.c"
    break;

  case 89: /* expr: expr '-' term  */
#line 525 "sintatico.y"
                         {
     (yyval.node) = new BinaryOp((yyvsp[-2].node), '-', (yyvsp[0].node));
}
#line 2346 "sintatico.tab.c"
    break;

  case 90: /* expr: term  */
#line 529 "sintatico.y"
            {
     (yyval.node) = (yyvsp[0].node);
}
#line 2354 "sintatico.tab.c"
    break;

  case 91: /* term: term '*' factor  */
#line 533 "sintatico.y"
                           {
     (yyval.node) = new BinaryOp((yyvsp[-2].node), '*', (yyvsp[0].node));
}
#line 2362 "sintatico.tab.c"
    break;

  case 92: /* term: term '/' factor  */
#line 537 "sintatico.y"
                           {
     (yyval.node) = new BinaryOp((yyvsp[-2].node), '/', (yyvsp[0].node));
}
#line 2370 "sintatico.tab.c"
    break;

  case 93: /* term: factor  */
#line 541 "sintatico.y"
              {
     (yyval.node) = (yyvsp[0].node);
}
#line 2378 "sintatico.tab.c"
    break;

  case 94: /* factor: '(' expr ')'  */
#line 545 "sintatico.y"
                     {
     (yyval.node) = (yyvsp[-1].node);
}
#line 2386 "sintatico.tab.c"
    break;

  case 95: /* factor: FLOAT  */
#line 549 "sintatico.y"
                    {
     (yyval.node) = new ConstDouble((yyvsp[0].flt));
}
#line 2394 "sintatico.tab.c"
    break;

  case 96: /* factor: INTEGER  */
#line 553 "sintatico.y"
                     {
     (yyval.node) = new ConstInteger((yyvsp[0].integer));
}
#line 2402 "sintatico.tab.c"
    break;

  case 97: /* factor: IDENT  */
#line 557 "sintatico.y"
                   {
     int reads = read_counts[(yyvsp[0].name)];
     int loops = loop_change_counts[(yyvsp[0].name)];

     if (declared_vars.count((yyvsp[0].name))) {
        if (memory_string.count((yyvsp[0].name))) {
             (yyval.node) = new Load((yyvsp[0].name), memory_string[(yyvsp[0].name)], true, reads);
        }
        else if (memory_float.count((yyvsp[0].name))) {
             double val = memory_float[(yyvsp[0].name)];
             (yyval.node) = new Load((yyvsp[0].name), val, true, reads, loops);
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
#line 2430 "sintatico.tab.c"
    break;

  case 98: /* factor: IDENT ']' indice '['  */
#line 581 "sintatico.y"
                                     {
     int indexVal = (yyvsp[-1].node)->getIntValue();
     int reads = read_counts[(yyvsp[-3].name)];
     int loops = loop_change_counts[(yyvsp[-3].name)];
     
     if (memory_vector_string.count((yyvsp[-3].name)) && memory_vector_string[(yyvsp[-3].name)].count(indexVal)) {
          string val = memory_vector_string[(yyvsp[-3].name)][indexVal];
          (yyval.node) = new LoadVector((yyvsp[-3].name), (yyvsp[-1].node), indexVal, val, true, reads, loops);
     }
     else if (memory_vector_float.count((yyvsp[-3].name)) && memory_vector_float[(yyvsp[-3].name)].count(indexVal)) {
          double val = memory_vector_float[(yyvsp[-3].name)][indexVal];
          (yyval.node) = new LoadVector((yyvsp[-3].name), (yyvsp[-1].node), indexVal, val, true, reads, loops);
     }
     else if (memory_vector_int.count((yyvsp[-3].name)) && memory_vector_int[(yyvsp[-3].name)].count(indexVal)) {
          int val = memory_vector_int[(yyvsp[-3].name)][indexVal];
          (yyval.node) = new LoadVector((yyvsp[-3].name), (yyvsp[-1].node), indexVal, val, true, reads, loops);
     } 
     else {
          (yyval.node) = new LoadVector((yyvsp[-3].name), (yyvsp[-1].node), reads, loops);
     }
}
#line 2456 "sintatico.tab.c"
    break;


#line 2460 "sintatico.tab.c"

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

#line 603 "sintatico.y"

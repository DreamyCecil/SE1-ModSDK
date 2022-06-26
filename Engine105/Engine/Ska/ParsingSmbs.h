// needed for parser and scanner
extern int yylex(void);
extern void yyerror(char *s);
extern int syyparse(void);
extern void syyrestart(FILE *f);
extern FILE *yyin;

#define YY_NEVER_INTERACTIVE 1

#define MAX_INCLUDE_DEPTH 32
// temporary values for parsing
extern INDEX _yy_iLine;
extern INDEX _yy_iIndex;
extern CModelInstance *_yy_mi;



/* 2012 (C) Jussi Rintanen, jrintanen.jr@gmail.com  */

typedef struct _seq {
  satinstance sati;
  int restart;
  int callsleft;
  int effort;
} seq;

extern seq seqs[10000];

void encoding();

typedef struct _CEstruct {
  int var;
  fma *condition;
  char disjunctive;
  struct _CEstruct *next;
} CEstruct;

extern CEstruct **CEs;

typedef struct _compactCEstruct {
  int var;
  fma *condition;
  char disjunctive;
} compactCEstruct;

extern compactCEstruct **cCEs;

typedef struct _actvar {
  int *effectlits;
  int *conditionlits;
} actvar;

extern int maxactvars;
extern actvar *actvars;

int actaffects(int,int);

#include "stdlib.h"
void assert_f(char *msg,char *file,int line)
{
  fprintf(stderr,"%s:%d %s",file,line,msg);
  abort();
}

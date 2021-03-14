void assert_f(char *msg,char *file,int line);

#define assert(msg) assert_f(msg,__FILE__,__LINE__);

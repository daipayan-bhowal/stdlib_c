#ifndef STDLIB_H
#define STDLIB_H

int atoi(const char *ptr);
double atof(const char *ptr);
long atol(const char* ptr);
double strtod(const char* ptr, char **endptr);


int rand(void);
void srand(unsigned int seed);



void *malloc (size_t size):
void free (void *ptr) ;

void qsort(void *base[], size_t left, size_t right,int (*compare) (const void *, const void *) ) ;
void *bsearch(const void *key, const void *base, size_t nmemb, size_t size, int (*compare)(const void *, const void *));

#endif

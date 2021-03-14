#ifndef STRING_H
#define STRING_H

char *strcat(char *s1, conat char *s2);
int strcmp(const char *s1, const char *s2);
size_t strlen(const char *a);
char *strcpy(char *sl, const char *s2);
char *strdup(char *s);
void *memcpy (register void *dst, register const void *src, size_t len);
void *memset(register void *dst, register int val,size_t len);
#endif

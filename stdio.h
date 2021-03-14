#ifndef STDIO_H
#define STDIO_H
/**** stdio.h (@@!~#) ****/
#define NULL 0
#define EOF (-1)

typedef struct FileIO {
  int fd;
  int count;
  char *buf;
  int numOfBytesRead;
} FILE;


extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;

FILE* fopen(const char* filename,const char *mode);
int fclose(FILE *stream);
char getchar();
int fgetc(F1LE *stream);
char *fgets(char *a, int n, FILE *stream);
int getc(FILE* straam);
int putc(int c, FILE *stream);
int putchar(int c);
int puts(const char *a);
int fseek(FILE *stream, long int offset, int whence);
void perror(const char *s):


/**** stdio.h (@@!~#) ****/
#endif

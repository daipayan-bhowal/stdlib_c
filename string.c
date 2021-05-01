char* strncat(char* destination, const char* source, size_t num)
{
    char *ptr = destination + strlen( destination);
 
    while(*source != '\0' && num--)
        *ptr++ = *source++;

  *ptr = '\0';
  
   return destination;
}

char *strncpy(char *destination, const char *source, int num)
{
    int i = 0;
     while(source[i] != '\0' && i < num)
     {
          destination[i] = source[i];
          i++;
      }
      if(i == num)
     {
       destination[i] = '\0';
      }
   return destination;
}

char *strtok(char *source, char *delim)
{
   static char *next;
   int i = 0,j = 0, flag1 = 0, flag2 = 0;
   char *dup;
   if(source == NULL)
   {
     source = next;
   }
   if (source[i] == '\0')
   {
     return NULL;
   }

   for (i = 0; source[i] != '\0'; i++)
   {
      for (j = 0; delim[j] != '\0'; j++)
      {
         if (source[i] == delim[j])
         {
           dup =(char*) malloc(sizeof(char)*(i));
           my_strncpy(dup,source,i);
           dup[i] = '\0';
           i++;
           j = -1;
           flag1 = 1;
         }
         else
         {
           flag2 = 1;
         }
      }

      if (flag1 && flag2)
      {
         next = source + i;
         return dup;
      }
    }
 next = source + i;
 return source;
}

void strcat(char s[],char t[])
{
    int i,j;

    i = j = 0;

    while(s[i] != '\0')
        i++;

    while((s[i++] = t[j++]) != '\0')
        ;

}
size_t strlen(char *s)
{
    char *p = s;

    while(*p != '\0')
        p++;

    return (size_t)p - s;
}

void strcpy(char *s, char *t)
{
    while((*s = *t) != '\0')
    {
        s++;
        t++;
    }
}
int strcmp(char *s,char *t)
{
    for( ; *s == *t; s++,t++)
        if(*s == '\0')
            return 0;

    return *s - *t;
}

char *strdup(char *s)
{
    char *p;

    p = (char *)malloc(strlen(s) + 1);
    strcpy(p,s);

    return p;

}

void *memcpy (register void *dst, register const void *src, size_t len)
{
    char *d = dst;
    const char *s = src;
    while (len--)
        *d++ = *s++;
    return dst;
}

void *memset(register void *dst, register int val,size_t len)
{   
    register char *d = dst;
    while(len--)
        *d++ = val;

    return dst;
}

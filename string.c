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

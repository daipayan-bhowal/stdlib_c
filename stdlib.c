/**** stdlib.h (@@!~#) ****/
int atoi(char s[])
{
   int i,n,sign;

    for(i=0; s[i] == ' ' || s[i] == '\t' || s[i] == '\v'; i++)
        ;
     sign = (s[i] == '-')?-1:1;
     if(s[i]=='+' || s[i]=='-')
         i++;
    for(n=0; s[i] >= '0' && s[i] <= '9'; i++)
        n = 10*n + (s[i] - '0'); 
 // @@!~#
   return sign*n;
}


long atol(char s[])
{
   int i,sign;
   long n;

 // @@!~#
    for(i=0; s[i] == ' ' || s[i] == '\t' || s[i] == '\v'; i++)
        ;
     sign = (s[i] == '-')?-1:1;
     if(s[i]=='+' || s[i]=='-')
         i++;
    for(n=0; s[i] >= '0' && s[i] <= '9'; i++)
        n = 10*n + (s[i] - '0'); 

   return (long)sign*n;
}


double atof(char s[])
{
  double val, power;
  int i, sign;

  for(i = 0; s[i] == ' ' || s[i] == '\v' || s[i] == '\t'; i++)
 /* @@!~# */;
  sign = (s[i] == '-')?-1:1;

  if(s[i] == '+' || s[i] =='-')
      i++;
   
  for(val = 0.0; s[i] >= '0' && s[i] <= '9';i++)
      val = 10.0*val + (s[i] - '0');
  
  if(s[i] == '.')
      i++;
      
  for(power=1.0; s[i] >= '0' && s[i] <= '9';i++)
  {
      val = 10.0 * val + (s[i] - '0');
      power *= 10.0;
  }

  return sign * val / power;
}

unsigned long int next = 1;

int rand(void)
{

    next = next * 1103515245 + 12345;
    return (unsigned int)(next/65536) % 32768; 
}

void srand(unsigned int seed)
{
   next = seed;
}

void swap(void *v[], int i, int j);
{
   void *temp;

   temp = v[i];
   v[i] = v[j];
   v[j] = temp;
}

void qsort(void *v[], size_t left, size_t right, int (*comp)(void *,void *))
{
 int i, last; 

 if(left >= right)
     return;

   swap(v,left, (left+right)/2);
   last = left;

   for(i=left+1; i<= right; i++)
       if((*comp)(v[i],v[left]) < 0)
           swap(v, ++last, i);
   
   swap(v, left, last);    
   qsort(v, left, last -1, comp);
   qsort(v, last+1,right, comp);    
}

void *bsearch(const void *key, const void *base, size_t nmemb, size_t size, int (*compare)(const void *, const void *)) // @@!~#
{
   int cond;
   int low,high,mid;

   low = 0;
   high = nmemb - 1;
 
   while(low <= high)
   {
       mid = (low + high)/2;
       if((cond=(*comp)(*key,base[mid])) < 0)
          high = mid;
       else if(cond > 0)
            low = mid + 1;
       else
           return mid;     
   }
   return -1;
}

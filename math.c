

/***  Math Library part taken help from
      How to Solve it by Computer 
             (R.G. Dromey)                
                             ***/
double abs(double num)
{
   if(num < 0)
   {
      num = -num;
      return num;
   }
   return num;
}
/*** Algorithm 3.1 Finding a square root of a Number ***/
double sqrt(double num)
{ 
  double est_root1;
  double est_root2= num/2;
  const double error = 10e-6;
 
  do
  {
    est_root1 = est_root2;
    est_root2 = (est_root1 + num/est_root2)/2;

  } while( abs(est_root1 - est_root2) >= error);
  
   return est_root1;
}
/*** Algorithm 3.7 Raising a number to a Large Power ***/
double pow(double base,double exp)
{
  double x_2= base;
  double prod = 1;
  int n = (int)exp;
  while(n > 0)
  {
     if(n % 2 == 1)
     {
         prod = prod * x_2;
     }
     n = n / 2;
     x_2 = x_2 * x_2;
  }

  return prod;
}

double exp(double x)
{
  const double error = 10e-6;
  double term = 1;
  double exp_result = 1;
  int i = 0;

  while( abs(term) > error)
  {
     i++;
     term = term * x/i;
     exp_result += term;
  }
  return exp_result;
}
/*** Algorithm 2.5  Sine Function Computation ***/
double sin(double x)
{
  const double error =  10e-6;
  double x_2 = x*x;
  double term = x;
  double sin_result = x;
  int i = 1;
   while( abs(term) > error )
   {
     i = i + 2;
     term = (double) - term * x_2 / (i*(i-1)); 
     sin_result += term;

   }
   return sin_result;
}
double cos(double x)
{
  const double error = 10e-6;
  double x_2 = x*x;
  double term = 1;
  double cos_result = 1;
  int i = 0;

  while( abs(term) > error)
  {
     i = i + 2;
     term = - term * x_2 / (i*(i-1));
     cos_result += term;
  }
  return cos_result;
}

double tan(double x)
{
  return sin(x)/cos(x);
}


double log(double x)
{
  const double error = 10e-6;
  double term= (x-1)/(x+1);
  double x_2 =((x-1)*(x-1))/((x+1)*(x+1));
  double log_result = (x-1)/(x+1); 
  int i = 1;

  while(abs(term) > error)
  {
    i= i+ 2; 
    term = term * x_2;
    log_result += term;
  }
  return 2*log_result;
}
double log10(double x)
{
  return log(x)/log(10.0);
}
#include <stdio.h>
int main()
{
     double degreeVal = 45;
   printf("%lf  %lf %lf \n"  ,log(2), log10(10), pow(22.5678,5));
   printf("%lf %lf \n"  ,pow(3,5), sqrt(68));
 double radianVal = degreeVal * (3.14159/180);
   printf("%lf %lf %lf \n"  ,sin(radianVal),cos(radianVal),tan(radianVal));


}

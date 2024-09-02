#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
long long int factorial(long long int n)
{
    if(n==0) return 1;
   long long int fac=n* factorial(n-1);
   return fac;
}
int main()
{
   long long  int n;
    scanf("%lld",&n);
    long long int f=factorial(n);
    printf("%lld\n",f);
    return 0;
}
 
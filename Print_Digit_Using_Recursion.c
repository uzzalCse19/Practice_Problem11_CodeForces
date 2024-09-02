#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void digit(int n)
{
    int d=n%10;
    if(n==0) return;
    digit(n/10);
    printf("%d ",d);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    int n;
    scanf("%d",&n);
    digit(n);
    if(n==0) printf("0");
    printf("\n");
    }
    return 0;
}
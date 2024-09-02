#include<stdio.h>
#include<limits.h>
#include<string.h>
int max_find(int arr[],int n,int i)
{
    int max=INT_MIN;
    if(i==n) return INT_MIN;
   max= max_find(arr,n,i+1);
   if(arr[i]>max) return arr[i];
   else return max;

}
int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++) scanf("%d",&arr[i]);
int max=max_find(arr,n,0);

printf("%d\n",max);
    return 0;
}
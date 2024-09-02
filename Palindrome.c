#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char str[1001];
    scanf("%s",str);
    int i=0,j=strlen(str)-1,flag=0;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            flag=1;
            break;
        }
        i++,j--;
    }
    if(flag==0) printf("YES\n");
    else printf("NO\n");
    return 0;
}
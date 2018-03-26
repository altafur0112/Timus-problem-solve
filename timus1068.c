#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d",n*(n+1)/2);
    }
    else
        printf("%d",1+(n*(1-n)/2));
    return 0;
}

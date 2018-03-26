#include<stdio.h>
#include<string.h>
int main()
{
    long long a,b,mul=1;
    char c[100];
    scanf("%lld %s",&a, c);
    b=strlen(c);
    for(;a>0;a-=b)

            mul=mul*a;


     printf("%lld\n",mul);

     return 0;

}

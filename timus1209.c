#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long k;
    while(n--)
    {
        scanf("%lld",&k);
        long long d=(long long)8*k-7;
        long long lo=1,h=d,m;
        while(lo!=h){
            m = (lo+h+1)/2;

            if(m>d/m)
                h = m-1;
            else
            lo = m;
        }
         if(lo*lo==d && (lo & 1)==1)
            printf("1");
        else
             printf("0");
         printf(" ");
    }

     printf("\n");

     return 0;

    }


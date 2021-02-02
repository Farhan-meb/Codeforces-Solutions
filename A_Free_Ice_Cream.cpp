#include <stdio.h>


int main()
{
    long long n,x;
    scanf("%I64d%I64d",&n,&x);
    long long sum=x,c=0;

    while(n--)
    {
        char s;
        long long y;
        scanf(" %c %I64d",&s,&y);

        if(s=='+') sum+=y;

        else
        {
            if(sum>=y)
            {
                sum-=y;

            }
            else
            {
                sum=sum;
                c++;
            }
        }
    }
    printf("%I64d %I64d\n",sum,c);

    return 0;
}

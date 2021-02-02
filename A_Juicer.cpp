#include <stdio.h>

int main()
{

    int n,b,d;

    scanf("%d%d%d",&n,&b,&d);

    int i,sum=0,N[n+10],c=0;

    for(i=0; i<n; i++)
    {
        scanf("%d",&N[i]);
    }
    for(i=0; i<n; i++)
    {
        if(N[i]<=b) sum+=N[i];
        if(sum>d)
        {
            c++;
            sum=0;
        }
    }
    printf("%d\n",c);

    return 0;


}

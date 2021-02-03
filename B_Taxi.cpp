#include <stdio.h>

int main()
{

    int n;
    scanf("%d",&n);

    int i,sum=0,N[n+10];
    int c=0,three=0,one=0;

    for(i=0; i<n; i++)
    {
        scanf("%d",&N[i]);
        if(N[i]==4) c++;
        else if(N[i]==3) three++;
        else if(N[i]==1) one++;
        else sum+=N[i];
    }
    int x = one-three;
    if(three>one)
    {
        c+=(three-one);
        c+=one;
    }
    else if(three<one)
    {
        c+=three;
        sum+=(x)*1;
    }
    else c+=three;

    if(sum>0)
    {
        for(;;)
        {
            sum-=4;
            c++;
            if(sum<=0) break;
        }
    }

    printf("%d\n",c);

}

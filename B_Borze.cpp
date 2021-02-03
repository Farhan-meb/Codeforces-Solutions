#include <stdio.h>
#include <string.h>

int main()
{
    char s[210];
    int ss[210];
    scanf("%s",&s);

    int i,x=strlen(s),k=0;

    for(i=0; i<x; i++)
    {
        if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                ss[k]=1;

            }
            else if(s[i+1]=='-')
            {
                ss[k]=2;

            }
            k++;
            i=i+1;


        }
        else
        {
            ss[k]=0;
            k++;
        }
    }
    for(i=0; i<k; i++)
    {
        if(i==k-1) printf("%d\n",ss[i]);
        else printf("%d",ss[i]);
    }

    return 0;
}

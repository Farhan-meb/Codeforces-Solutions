#include <stdio.h>

int main()
{
    char c;
    int d;
    scanf("%c%d",&c,&d);
    if(c=='a'||c=='h')
    {
        if(d==1||d==8) printf("3\n");
        else printf("5\n");
    }
    else if(c!='a'||c!='h')
    {
        if(d==1||d==8) printf("5\n");
        else printf("8\n");

    }
    else printf("8\n");

    return 0;

}

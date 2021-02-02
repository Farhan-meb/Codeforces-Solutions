#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[110];
    cin >> s;
    int flag=0,x=strlen(s);

    for(int i=0;i<x;i++)
    {
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
        {
            flag=1;
            break;
        }
    }

    if(flag==1) cout << "YES\n";
    else cout << "NO\n";

    return 0;

}

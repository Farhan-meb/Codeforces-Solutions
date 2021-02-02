#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[110];
    cin >>s;
    int c=0,n=strlen(s);

    for (int i=1; i<n; i++)
        if (isupper(s[i])) c++ ;
    if (c==(n-1))
    {
        for (int i=0; i<n; i++)
        {
            if (isupper(s[i])) s[i] = tolower(s[i]) ;
            else s[i] = toupper(s[i]) ;
        }
    }
    cout << s ;
    return 0 ;
}

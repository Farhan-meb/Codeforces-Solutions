#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int c=0,o=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='o') o++;
        else c++;
    }

    if(c==0 or o==0)
    {
        cout<<"YES\n";
        return 0;
    }

    if(c%o==0)
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int z=0,zL=0,o=0,t=0;
    bool tflag=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1') o++;
        else if(s[i]=='0' and tflag==0) z++;
        else tflag=1;
    }
    while(z--) cout<<0;
    while(o--) cout<<1;
    bool flag=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='2')
        {
            cout<<2;
            flag=1;
        }
        else if(s[i]=='0' and flag) cout<<0;
    }
    cout<<endl;
}

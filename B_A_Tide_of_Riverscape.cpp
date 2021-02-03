#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    string s;
    cin>>s;
    bool flag=0;
    for(int i=0;i<s.size()-(p);i++)
    {
        //cout<<s[i]<<" "<<s[i+p]<<endl;
        if(s[i]=='.')
        {
            if(s[i+p]=='1') s[i]='0';
            else if(s[i+p]=='0') s[i]='1';
            else
            {
                s[i]='1',s[i+p]='0';
            }
            flag=1;
        }
        else if(s[i]=='1')
        {
            if(s[i+p]=='1')
            {
                continue;
            }
            else
            {
                 s[i+p]='0';
                 flag=1;
            }
        }
        else if(s[i]=='0')
        {
            if(s[i+p]=='0')
            {
                continue;
            }
            else
            {
                s[i+p]='1';
                flag=1;
            }
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            if(s[i-p]=='1') s[i]='0';
            else  s[i]='1';
        }
    }
    if(!flag) cout<<"NO\n";
    else cout<<s<<endl;
}


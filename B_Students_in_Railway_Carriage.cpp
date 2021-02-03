#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,p,a;
    cin>>n>>p>>a;

    string s;
    cin>>s;
    ll c=0;
    for(int i=0; i<s.size(); i++)
    {
        if(p==0 and a==0)
        {
            break;
        }
        if(s[i]=='.')
        {

            if(i==0)
            {
                if(p>=a)
                {
                    c++;
                    p--;
                    s[i]='p';
                }
                else
                {
                    c++;
                    a--;
                    s[i]='a';
                }
            }
            else if(s[i-1]=='*' and s[i+1]=='*')
            {
                if(p>=a)
                {
                    c++;
                    p--;
                    s[i]='p';
                }
                else
                {
                    c++;
                    a--;
                    s[i]='a';
                }
            }
            else if(s[i-1]=='p')
            {
                if(a>0)
                {
                    s[i]='a';
                    c++;
                    a--;
                }
                else s[i]='*';
            }
            else if(s[i-1]=='a')
            {
                //cout<<-1<<endl;
                if(p>0)
                {
                    s[i]='p';
                    c++;
                    p--;
                }
                else s[i]='*';
            }
            else if(s[i-1]=='*')
            {
                if(p>a)
                {
                    c++;
                    p--;
                    s[i]='p';
                }
                else
                {
                    c++;
                    a--;
                    s[i]='a';
                }
            }
            else if(s[i-1]=='.')
            {
                if(p>a)
                {
                    c++;
                    p--;
                    s[i]='p';
                }
                else
                {
                    c++;
                    a--;
                    s[i]='a';
                }
            }
        }
    }
    //cout<<s<<endl;
    cout<<c<<endl;

}


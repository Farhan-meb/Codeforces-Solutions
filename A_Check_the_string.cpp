#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin>>s;

    int a=0,b=0,c=0;
    int x=0;

    if(s[0]=='b' || s[0]=='c')
    {
        cout<<"NO\n";
        return 0;
    }
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a')
        {
            a++;
        }
        else if(s[i]=='c')
        {
            cout<<"NO\n";
            return 0;
        }
        else
        {
            x=i;
            break;
        }
        // cout<<i<<endl;
    }
    //cout<<x<<endl;
    for(int i=x; i<s.size(); i++)
    {
        if(s[i]=='b')
        {
            b++;
        }
        else if(s[i]=='a')
        {
            //cout<<"found b\n";
            cout<<"NO\n";
            return 0;
        }
        else
        {
            x=i;
            break;
        }
    }
    //cout<<endl;
    for(int i=x; i<s.size(); i++)
    {
        if(s[i]=='c')
        {
            c++;
        }
        else if(s[i]=='a' || s[i]=='b')
        {
            cout<<"NO\n";
            return 0;
        }
    }

//cout<<a<<" "<<b<<" "<<c<<endl;
    if(c==a || c==b)
    {
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}


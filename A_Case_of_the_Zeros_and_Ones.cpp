#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;

void del(int a, int b, int n)
{
    for(int i=a; i<n; i++)
    {
        s[i] = s[i+2];
    }

}

int main()
{
    ll n;
    cin>>n;
    cin>>s;

    int one=0,zero=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='1') one++;
        else zero++;
    }
    //cout<<one<<zero<<endl;

    cout<<max(one,zero) - min(one,zero)<<endl;

}


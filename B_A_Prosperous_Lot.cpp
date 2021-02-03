#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;

    if(n>36) cout<<"-1\n";
    else
    {
        if(n%2==0)
        {
            ll x = n/2;
            for(int i=0;i<x;i++)
            {
                cout<<"8";
            }
            cout<<endl;
        }
        else
        {
            ll x=n/2;
            for(int i=0;i<x;i++) cout<<"8";
            cout<<"4"<<endl;
        }
    }
}
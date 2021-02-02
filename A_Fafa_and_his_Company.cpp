#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;

    ll c=0;
    for(int i=1;i<=n/2;i++)
    {
        ll x = n-i;
        //cout<<x<<endl;
        if(x%i==0)
        {
            c++;
        }
    }
    cout<<c<<endl;
}

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,r;
    cin>>n>>r;

    ll i=1;

    while(1)
    {
        ll x = n*i;
        if(x%10==0 || (x-r)%10==0)
        {
            cout<<i<<endl;
            return 0;
        }
        else i++;
    }
}

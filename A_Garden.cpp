#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,k;
    cin>>n>>k;

    ll N[110];

    for(ll i=0;i<n;i++) cin>>N[i];


    ll minn=100000000000000;
    for(ll i=0;i<n;i++)
    {
        ll key = N[i];
;       if(k%key==0 && (k/key)<minn)
        {
            minn = (k/key);
        }
    }
    cout<<minn<<endl;
}



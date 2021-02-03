#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
map<ll,ll>mp;
map<ll,ll>mmp;
map<ll,ll>mmmp;

int main()
{
    ll n,n1,n2;
    cin>>n;
    vector<ll> N;
    vector<ll> NN;
    vector<ll> NNN;
    for(ll i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        N.push_back(x);
        mp[N[i]]++;
    }
    for(ll i=0; i<n-1; i++)
    {
        ll x;
        cin>>x;
        NN.push_back(x);
        mmp[NN[i]]++;
    }
    for(ll i=0; i<n; i++)
    {
        if(mp[N[i]]!=mmp[N[i]])
        {
            n1=N[i];
            break;
        }
    }
    for(ll i=0; i<n-2; i++)
    {
       ll x;
        cin>>x;
        NNN.push_back(x);
        mmmp[NNN[i]]++;
    }
    for(ll i=0; i<n-1; i++)
    {
        if(mmp[NN[i]]!=mmmp[NN[i]])
        {
            n2=NN[i];
            break;
        }
    }
    cout<<n1<<endl<<n2<<endl;
}

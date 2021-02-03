#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    map<ll,ll>mp;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        mp[x]++;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    //for(ll i=0;i<n;i++) cout<<v[i]<<" ";

    for(ll i=n-1;i>=0;i--)
    {
        ll key = v[i];
        if((mp[key]%2)!=0)
        {
            cout<<"Conan\n";
            return 0;
        }
    }

//    cout<<endl<<c<<endl;
    cout<<"Agasa\n";

}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;

    long long N[200000+10];

    for(ll i=0; i<n; i++) cin>>N[i];

    sort(N,N+n);
    //for(ll i=0; i<n; i++) cout<<N[i]<<" ";


   long long dif = N[n-1]-N[0],c1=0,c2=0;

    for(ll i=0;i<n;i++)
    {
        if(N[i]==N[0]) c1++;
        if(N[i]==N[n-1]) c2++;
    }
    if(c1==n)
    {
        ll x = (c1*(c1-1))/2;
        cout<<dif<<" "<<x<<endl;
    }
    else cout<<dif<<" "<<c1*c2<<endl;

    return 0;


}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;

    ll N[n+10];

    for(int i=0;i<n;i++) cin>>N[i];

    ll min = N[0];

    for(int i=0;i<n;i++)
    {
        if(N[i]<min) min=N[i];
    }
    //cout<<min;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        if(N[i]==min) v.push_back(i+1);
    }
    //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    //cout<<endl;
    ll min1 = v[1]-v[0];
    for(int i=1;i<v.size();i++)
    {
        ll x = v[i]-v[i-1];
        if(x<min1) min1=x;
    }
    cout<<min1<<endl;
}


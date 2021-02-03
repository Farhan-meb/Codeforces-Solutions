#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;;
    cin>>n>>k;
    ll N[n+10];
    vector<ll>v;
    ll sum=0,esum=0;
    for(ll i=1;i<=n;i++) cin>>N[i];
    ll o=1;
    for(ll i=1;i<=n;i++)
    {
        if(o==(n-k)+2)
        {
            break;
        }
        //cin>>N[i];
        if(i<=k)sum+=N[i];
        if(i==k)
        {
            ll temp = sum+esum;
            v.push_back(temp);
            esum = temp-N[i-k+1];
            o++;
        }
        if(i>k)
        {
            ll temp=esum+N[i];
            v.push_back(temp);
            esum = temp-N[i-k+1];
            o++;
        }
    }
    ll fsum=0;
    for(ll i=0;i<v.size();i++) fsum+=v[i];
    double res = (double)(fsum)/((n-k)+1);
    cout<<fixed<<setprecision(10) << res<<endl;
}

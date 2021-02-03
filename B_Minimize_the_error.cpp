#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,k1,k2;
    cin>>n>>k1>>k2;

    ll a[n+10],b[n+10];

    for(ll i=1;i<=n;i++) cin>>a[i];

    for(ll i=1;i<=n;i++) cin>>b[i];

    ll dif[n+10];

    for(ll i=1;i<=n;i++)
    {
        dif[i]=abs(a[i]-b[i]);
    }

    for(ll i=1;i<=n;i++)
    {
        for(ll j=i+1;j<=n;j++)
        {
            if(dif[i]<dif[j])
            {
                swap(dif[i],dif[j]);
                swap(a[i],a[j]);
                swap(b[i],b[j]);
            }
        }
    }
    ll tot = (k1+k2);
//
//    for(ll i=1;i<=n;i++) cout<<dif[i]<<" ";
//
//    cout<<endl;

    while(tot--)
    {
        ll maxx=-100000000000000,ind=0;
        for(ll i=1;i<=n;i++)
        {
            if(dif[i]>maxx)
            {
                ind=i;
                maxx=dif[i];
            }
        }
//        cout<<maxx<<endl;
//        if(maxx==0)
//        {
//            if(tot%2==0)
//            {
//                dif[ind]=-1;
//                break;
//            }
//            else
//            {
//                dif[ind]=0;
//                break;
//            }
//        }
        dif[ind]--;
        if(maxx==0)
        {
            for(int i=1;i<=n;i++)
            {
                if(dif[i]<0) dif[i]*=(-1);
            }
        }
    }

    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
        //cout<<dif[i]<<" ";
        sum+=(dif[i]*dif[i]);
    }
    //cout<<endl;
    cout<<sum<<endl;




}



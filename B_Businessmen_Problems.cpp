#include<bits/stdc++.h>
using namespace std;


#define MAX          (int)1e5+10
#define MIN          -(int)1e5+10
#define ll           long long
#define pii          pair<ll,ll>
#define sf(a)        scanf("%d",&a)
#define pf(a)        printf("%d\n",a)
#define mem(a,b)     memset(a,b,sizeof(a))
#define all(x)       x.begin(),x.end()
#define rall(x)      x.rbegin(),x.rend()
#define pb           push_back

int main()
{
    ll n;
    cin>>n;
    ll N[n+10];

    map<ll,ll>hishab;
    map<ll,bool>flag;

    ll sum=0;

    for(int i=1;i<=n;i++)
    {
        cin>>N[i];
        ll x;
        cin>>x;
        sum+=x;
        flag[N[i]]=1;
        hishab[N[i]]=x;
    }
   // cout<<sum<<"  sum"<<endl;

    ll m;
    cin>>m;

    ll M[m+10];
    for(int i=1;i<=m;i++)
    {
        cin>>M[i];
        ll x;
        cin>>x;
        if(flag[M[i]]==1)
        {
            ll temp = hishab[M[i]];
            //sum-=min(temp,x);
            //sum+=max(temp,x);
            if(temp<x)
            {
                sum-=temp;
                sum+=x;
            }
            else continue;
        }
        else sum+=x;
        //cout<<ends<<ends<<M[i]<<ends<<sum<<endl;
    }

    cout<<sum<<endl;
}

#include<bits/stdc++.h>
using namespace std;


#define MAX          (int)1e5+10
#define MIN          -(int)1e5+10
#define ll           long long
#define pii          pair<ll,ll>
#define sf(a)        scanf("%d",&a)
#define pf(a)        printf("%d",a)
#define spc          printf(" ")
#define nl           printf("\n");
#define mem(a,b)     memset(a,b,sizeof(a))
#define all(x)       x.begin(),x.end()
#define sortv(x)     sort(x.begin(),x.end())
#define sortvr(x)    sort()x.rbegin(),x.rend())
#define pb           push_back

int main()
{
    ll n;
    cin>>n;

    ll N[210];

    for(int i=1;i<=2*n;i++) cin>>N[i];
    map<ll,bool>mp;
    ll c=0;
    for(int i=1;i<=2*n;i++)
    {
        if(N[i]==N[i-1]) continue;
        if(mp[N[i]]==0 and N[i]!=N[i+1])
        {
            //cout<<N[i]<<" ";
            int pos=0;
            for(int j=i+1;j<=2*n;j++) if(N[j]==N[i])
            {
                pos=j;
                break;
            }

            for(int j=pos;j>i;j--)
            {
                swap(N[j],N[j-1]) ;
                //c++;
            }
            c+=(pos-(i+1));
            mp[N[i]]=1;
        }
    }
    cout<<c<<endl;
}
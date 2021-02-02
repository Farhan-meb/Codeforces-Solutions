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
map<int,int>mp;
int main()
{
    int n;
    cin>>n;

    int N[n+10];

    for(int i=1;i<=n;i++) cin>>N[i];

    map<int,int>mp;
    ll c=0;
    for(int i=1;i<=n;i++)
    {
        if(N[i]!=0)
        {
            if(mp[N[i]]==0)
            {
                mp[N[i]]=1;
                c++;
            }
        }
    }
    cout<<c<<endl;
}

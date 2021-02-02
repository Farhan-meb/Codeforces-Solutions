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
    int n;
    cin>>n;
    int k;
    cin>>k;

    int N[n+10];

    for(int i=1;i<=n;i++) cin>>N[i];

    ll c=0;
    ll t=n;
    for(int i=1;i<=n;i++)
    {
        if(N[i]>k)
        {
            t=i;
            break;
        }
        c++;
    }
    if(t==n)
    {
        cout<<c<<endl;
        return 0;
    }
    for(int i=n;i>=t;i--)
    {
        if(N[i]>k) break;
        c++;
    }

    cout<<c<<endl;


}

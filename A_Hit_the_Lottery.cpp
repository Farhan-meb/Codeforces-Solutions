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

    int N[10];
    N[0]=100,N[1]=20,N[2]=10,N[3]=5,N[4]=1;
    ll c=0;
    for(int i=0;i<5;i++)
    {
        if(N[i]<=n)
        {
            c+=(n/N[i]);
            n = n%N[i];
        }

    }
    cout<<c<<endl;
}

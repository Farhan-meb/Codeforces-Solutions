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
    ll n,m,a,b;
    cin>>n>>m>>a>>b;


    ll cost1=0,cost2=0;
    ll temp=n;
    ll dif1 = ceil((double)n/m);
    ll dif2 = n/m;
    //cout<<dif1<<" "<<dif2<<endl;
    ll need = m*dif1;
    cost1 += ((need-n)*a);

    need = 0;

    need = (m*dif2);
    cost2+=((n-need)*b);
    cout<<min(cost1,cost2)<<endl;

}

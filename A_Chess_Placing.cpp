#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;

    ll N[n+10];

    for(int i=0; i<(n/2); i++)
        cin>>N[i];

    sort(N,N+(n/2));

    ll check=N[0];


        ll c=n-1;
        ll sum=0;
        ll x = n/2;

        for(int i = x-1; i>=0; i--)
        {
            sum+=abs((c-(N[i])));
            c-=2;
        }
        //cout<<sum<<endl;


        ll sum1=0;
        ll c1=n;
        ll xx = n/2;
        for(int i = xx-1; i>=0; i--)
        {
            sum1+=abs((c1-(N[i])));
            c1-=2;
        }
        cout<<min(sum,sum1)<<endl;






   // cout<<min(sum,sum1)<<endl;
}

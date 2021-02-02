#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;

    ll N[5000+10];

    for(int i=1;i<=n;i++) cin>>N[i];

    map<int,int>mp;

    for(int i=1;i<=n;i++)
    {
        int x = N[i];
        int y = N[x];
        int z = N[y];

        if(z==i)
        {
            cout<<"YES\n";
            return 0;
        }

    }
    cout<<"NO\n";

}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll big_mod_by_from_priyom_dha(ll b,ll p,ll m)
{
    if(p==0) return 1;

    if(p%2==0)
    {
        ll x = big_mod_by_from_priyom_dha(b,p/2,m);
        return m%(x*x);
    }
    else return m% ((b%m) * big_mod_by_from_priyom_dha(b,p-1,m));
}

int main()
{

    ll P,M,B=2;
    cin>>P>>M;

    ll res = pow(2,P);
    ll ress = M % res;
    printf("%d\n",ress);


    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    double w;
    cin>>n>>w;

    int N[200000+10];

    for(int i=1;i<=2*n;i++) cin>>N[i];

    sort(N,N+(n*2));

    double gcup=N[1],bcup=N[n+1];

    double res;

    if(2*gcup<bcup)
    {
        res = 3*gcup*n;
    }
    else res = 1.5 * bcup * n;

    res = min(res,w);

    printf("%.6lf\n", res);



}
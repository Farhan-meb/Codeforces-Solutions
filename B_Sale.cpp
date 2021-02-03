#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,m;
    cin>>n>>m;

    int N[110];

    for(int i=0;i<n;i++) cin>>N[i];

    sort(N,N+n);

    ll sum=0;

    for(int i=0;i<m;i++)
    {
        if(N[i]>0) break;
        sum+=abs(N[i]);
    }

    cout<<sum<<endl;
}

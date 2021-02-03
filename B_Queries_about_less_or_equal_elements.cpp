#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int N[n+10],M[m+10];

    for(int i=0;i<n;i++) cin>>N[i];

    for(int i=0;i<m;i++) cin>>M[i];

    sort(N,N+n);

    for(int i=0;i<m;i++)
    {
        int x = M[i];
        int res = upper_bound(N,N+n,x)-N;
        if(i==m-1) cout<<res<<endl;
        else cout<<res<<" ";

    }
}
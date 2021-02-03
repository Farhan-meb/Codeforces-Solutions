#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int N[n+10];

    for(int i=0; i<n; i++) cin>>N[i];

    sort(N,N+n,greater<int>());

    //for(int i=0; i<n; i++) cout<<N[i]<<" ";

    int c=0,i=0;

    while(m>0)
    {
        m-=N[i];
        i++;
        c++;
    }
    cout<<c<<endl;

}
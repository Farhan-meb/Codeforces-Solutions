#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,y,z,sum=0,summ=0,summm=0;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        sum+=x;
        summ+=y;
        summm+=z;
    }
    if(sum==0&&summ==0&&summm==0) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}

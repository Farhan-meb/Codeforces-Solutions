
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct my{

    int a,b;
};

int main()
{
    int n,m;
    cin>>n>>m;
    ll sum=0;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
        v.push_back(sum/m);
        sum%=m;
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

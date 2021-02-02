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

    my N[110];
    ll minn = 11111,maxx=0;
    map<int,bool> mp;

    for(int i=0;i<n;i++)
    {
        cin>>N[i].a>>N[i].b;
        if(N[i].a<minn) minn = N[i].a;
        if(N[i].b>maxx) maxx = N[i].b;

        for(int j=N[i].a;j<=N[i].b;j++)
        {
            mp[j]=1;
        }
    }

    int c=0,ch=1;
    vector<int>res;
    for(int i=1;i<=m;i++)
    {
        if(mp[i]==0)
        {
            res.push_back(i);
            c++;
        }

    }
    cout<<c<<endl;

    for(int i=0;i<res.size();i++)
    {

        cout<<res[i]<<" ";

    }
    cout<<endl;
}

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin>>n;

    int N[n+10];

    map<int,int>mp;
    ll maxx=0;
    for(int i=1;i<=n;i++)
    {
        cin>>N[i];
        mp[N[i]]++;
        if(mp[N[i]]>maxx) maxx=mp[N[i]];
    }

    cout<<maxx<<endl;
}

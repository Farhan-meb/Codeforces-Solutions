#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n,p;
    cin>>n>>p;



    int N[p+10];
    map<int,int>mp;
    for(int i=0;i<p;i++)
    {
        cin>>N[i];
        mp[N[i]]++;
    }

    map<int,bool>flag;

    vector<int>v;

    if(n>p)
    {
        cout<<0<<endl;
        return 0;
    }

    for(int i=0;i<p;i++)
    {
        if(flag[N[i]]==0)
        {
            v.push_back(mp[N[i]]);
            flag[N[i]]=1;
        }
    }

    sort(v.begin(),v.end());

    int c=1;

    while(true)
    {
        int sum=0;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(sum>=n) break;
            sum += (v[i]/c);
        }
        if(sum<n)
        {
            cout<<c-1<<endl;
            return 0;
        }
        c++;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int N[110],M[110];

    for(int i=0;i<n;i++) cin>>N[i];

    for(int i=0;i<n;i++) cin>>M[i];

    bool flag=0;
    map<int,int>mp;

    for(int i=0;i<n;i++)
    {
        mp[N[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        mp[M[i]]--;
    }
    int sum=0;
    for(int i=1;i<=5;i++)
    {
        if(mp[i]<0) mp[i]*=(-1);
        if(mp[i]==0) continue;
        if(mp[i]%2!=0)
        {
            cout<<"-1\n";
            return 0;
        }
        sum+=mp[i];
    }
    sum/=2;
    cout<<sum/2<<endl;
}

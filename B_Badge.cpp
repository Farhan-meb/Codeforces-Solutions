#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin>>n;

    int N[1100];

    map<int,int>mp;

    for(int i=1;i<=n;i++)
    {
        cin>>N[i];

    }
    vector<int>res;
    for(int i=1;i<=n;i++)
    {
        int key = i;
        bool found = 0;
        mp[i]++;
        int k=N[i];
        int temp=0;
        while(true)
        {
            mp[k]++;

            if(mp[k]==2)
            {
                temp=k;
                break;
            }
            k = N[k];

        }
        res.push_back(temp);
        mp.clear();
    }
    for(int i=0;i<res.size();i++) cout<<res[i]<<" ";
    cout<<endl;
}

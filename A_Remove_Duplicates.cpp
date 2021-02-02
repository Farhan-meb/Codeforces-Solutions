#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin>>n;

    int N[60];

    map<int,int>mp;

    for(int i=0; i<n; i++)
    {
        cin>>N[i];
        mp[N[i]]++;
    }
    vector<int>v;
    int c=0;
    for(int i=0; i<n; i++)
    {
        if(mp[N[i]]>1)
        {
            mp[N[i]]--;
            N[i]=-1;

        }
        else if(mp[N[i]]==1)
        {
            c++;
        }
    }
    cout<<c<<endl;

    for(int i=0; i<n; i++)
    {
        if(N[i]!=-1)
        {
            cout<<N[i];
            if(i==n-1)
                cout<<endl;
            else
                cout<<" ";
        }



    }

}

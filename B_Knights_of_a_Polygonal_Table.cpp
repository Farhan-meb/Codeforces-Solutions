#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll csum[100000+10];

struct my
{
    ll pow,coin;
};

ll temp[100000+10];

bool acompare(my lhs, my rhs)
{
    return lhs.pow < rhs.pow;
}

int main()
{
    ll n,k;
    cin>>n>>k;

    my N[n+10];

    for(int i=0; i<n; i++)
    {
        cin>>N[i].pow;
        temp[i]=N[i].pow;
    }

    ll sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>N[i].coin;
    }

    sort(N, N+n, acompare);

    map<ll,ll>mp;
    ll c=0;
    priority_queue<ll>q;
    vector<ll>v;
    
    for(int i=0; i<n; i++)
    {

        ll x=N[i].coin;
        ll temsum=x;
        ll temp=k;
        while(!q.empty())
        {
            if(temp==0)
                break;
            ll hi = q.top();
            q.pop();
            v.push_back(hi);
            temsum+=hi;
            temp--;
        }
        q.push(x);
        mp[N[i].pow] = temsum;
        for(int j=0; j<v.size(); j++)
            q.push(v[j]);
        v.clear();

    }
    
    for(int i=0; i<n; i++)
    {
        cout<<mp[temp[i]];
        if(i==n-1)
            cout<<endl;
        else
            cout<<" ";
    }
    
}



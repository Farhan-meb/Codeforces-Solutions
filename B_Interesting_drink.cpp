#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>v;

int bs(int n, int x)
{
    int l = 0, r = n-1, mid, pos = -1;
    while(l <= r)
    {
        mid = (l + r) / 2;
        if(v[mid] == x)
        {
            pos = mid;
            l = mid + 1;
        }
        else if(v[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }

    if(pos != -1)
        return pos;
    else
        return l - 1;
}

int main()
{
    ll n;
    cin>>n;



    for(int i=0; i<n; i++)
    {
        ll num;
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    ll q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        ll c = bs(n,x);
        c++;
        cout<<c<<endl;
    }
}

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
map<char,ll>mp;
//map<ll,ll>num;
priority_queue< pair < ll, ll >,vector < pair < ll, ll > > > pq;
deque < pair <ll, ll> > q;

int main()
{
    ll n;
    cin >> n;

    vector<ll>v;

    for(ll i=1; i<=n; i++)
    {
        ll num;
        cin >> num;
        q.push_back({num, i});
    }

    sort(q.begin(), q.end());

    string s;
    cin >> s;

    for(ll i=0; i<s.length(); i++)
    {
        if(s[i]=='0')
        {
            //cout << q.front().second << " ";
            v.push_back(q.front().second);
            pq.push({q.front().first, q.front().second});
            q.pop_front();
        }
        else
        {
            //cout << pq.top().second << " ";
            v.push_back(pq.top().second);
            pq.pop();
        }
    }

    for(ll i=0; i<v.size(); i++)
    {
        cout<<v[i];
        if(i==v.size()-1)
            cout<<endl;
        else
            cout<<" ";
    }
}

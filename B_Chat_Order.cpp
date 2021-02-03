#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    vector<string>v;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
//    for(int i=0;i<v.size()-1;i++)
//    {
//        cout<<v[i]<<"  ";
//    }
    ll sz=v.size()-1;
    //cout<<sz<<endl;
    map<string,bool>mp;

    for(int i=sz;i>=0;i--)
    {
        string temp = v[i];

        if(mp[temp]==0)
        {
            cout<<temp<<endl;
        }
        mp[temp]=1;
    }
}
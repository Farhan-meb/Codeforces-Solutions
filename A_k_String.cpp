#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    ll l=s.size();

    if(l%n!=0)
    {
        cout<<"-1\n";
        return 0;
    }
    else
    {
        for(int i=0; i<l; i++)
        {
            mp[s[i]]++;
        }

        for(int i=0; i<l; i++)
        {
            char cc = s[i];
            if(mp[cc]%n!=0)
            {
                cout<<"-1\n";
                return 0;
            }
        }
        map<ll,ll>maap;
        vector<char>v;
        for(int i=0; i<l; i++)
        {
            if(maap[s[i]]==0)
            {
                //cout<<s[i]<<endl;
                v.push_back(s[i]);
                maap[s[i]]=1;
            }
        }
        map<ll,ll>key;
        for(int i=0; i<v.size(); i++)
        {
            key[v[i]]=mp[v[i]]/n;
        }

        int temp=n;
        while(temp--)
        {

            //cout<<"ok\n";
            for (int i= 0; i<v.size(); i++)
            {
                char h=v[i];
                //ll key = mp[h];

                //cout<<" ok\n";
                ll x = key[h];
                //cout<<"x = "<<x<<endl;
                if(x==0) break;



                //mp[h]-=x;
                while(x--)
                {
                    cout<<h;
                }
            }

        }
        cout<<endl;

    }
}

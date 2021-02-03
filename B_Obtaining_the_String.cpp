#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct my{
    int a,b;
};

int main()
{
    int n;
    cin>>n;

    string s,t;
    cin>>s>>t;

    if(s==t)
    {
        cout<<0<<endl;
        return 0;
    }

    map<char,bool>mp;

    for(int i=0;i<s.size();i++) mp[t[i]]=1;

    for(int i=0;i<t.size();i++)
    {
        if(mp[s[i]]==0)
        {
            cout<<-1<<endl;
            return 0;
        }
    }

    int moves=0;
    vector<int>v;

    for(int i=0;i<t.size();i++)
    {
        char key = t[i];

        if(t[i]==s[i]) continue;
        int pos = i;
        for(int j=i+1;j<s.size();j++)
        {
            if(key == s[j])
            {
                pos = j;
                break;
            }
        }
        for(int j=pos;j>i;j--)
        {

            //if(j==i) break;
            swap(s[j],s[j-1]);
        }
        for(int j=pos;j>i;j--)
        {
            v.push_back(j);
        }
    }

    if(s!=t)
    {
        cout<<-1<<endl;
        return 0;
    }

    cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++) cout<<v[i]<<" ";

    cout<<endl;
}


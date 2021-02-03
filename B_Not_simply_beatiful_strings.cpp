#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    if(s.size()<4)
    {
        cout<<"NO\n";
        return 0;
    }
    map<char,bool>mp;
    int c=0;
    for(int i=0; i<s.size(); i++)
    {
        if(mp[s[i]]==0)
        {
            mp[s[i]]=1;
            c++;
        }
    }
    //cout<<c<<endl;

    if(c>4 or c==1)
    {
        cout<<"NO\n";
        return 0;
    }
    if(c==4 or c==3)
    {
        cout<<"YES\n";
        return 0;
    }
    if(c==2)
    {
        map<char,int>hi;
        for(int i=0; i<s.size(); i++)
        {
            hi[s[i]]++;
        }
        for(int i=0; i<s.size(); i++)
        {
            if( hi[s[i]]==1)
             {
                cout<<"NO\n";
                return 0;
            }
        }

    }
    cout<<"YES\n";
}

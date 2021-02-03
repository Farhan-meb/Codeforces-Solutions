#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define MOD          (int)1e9+7
#define MAX          (int)1e6+5

ll pw[MAX];
ll base = 1331;
ll Hash[MAX];

void preCal()
{
    pw[0] = 1;
    for(int i=1; i<MAX; i++)
        pw[i] = pw[i-1]*base;
}

void setHash(string s)
{
    Hash[0] = 0;
    for(int i=1; i<s.size(); i++)
        Hash[i] = Hash[i-1]*base+s[i];
}

ll getHash(int l,int r)
{
    return Hash[r]-(Hash[l-1]*pw[r-l+1]);
}

ll Hasher(string s)
{
    ll hashValue = 0;
    for(int i=0; i<s.size(); i++)
        hashValue = hashValue*base+s[i];
    return hashValue;
}

int main()
{
    preCal();

    ll n,m,q;
    cin>>n>>m>>q;
    string s,ss;
    cin>>s>>ss;

    while(q--)
    {
        ll le,ri;
        cin>>le>>ri;

        string temp = "\0";
        for(int i=le-1;i<ri;i++) temp+=s[i];

        temp = "$"+temp;
        setHash(temp);
        int l1 = temp.size(), l2 = ss.size();

        ll hashValue = Hasher(ss);
        int c = 0;
        for(int i=1; i+l2<=l1; i++)
        {
            int l = i, r = i+l2-1;
            //bug(hashValue)
            //bug(getHash(l,r))
            if(getHash(l,r) == hashValue)
                c++;
        }

        cout<<c<<endl;

    }


}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll c,o;
    bool flag=false;

    cin>>c>>o;

    ll cc=0,oo=0;

    cc = o-2;

    cc++;

    if(o==1 and c == 0)
    {
        cout<<"YES\n";
        return 0;
    }
    else if(o==0)
    {
        cout<<"NO\n";
        return 0;
    }
    else if(o==1 and c>0)
    {
        cout<<"NO\n";
        return 0;
    }

    while(true)
    {
        if(cc==c)
        {
            flag=true;
            break;
        }
        else if(cc>c)
        {
            break;
        }
        else cc+=2;
    }


    if(flag) cout<<"YES\n";
    else cout<<"NO\n";
}

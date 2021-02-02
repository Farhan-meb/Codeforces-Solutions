#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll  n,h,a,b,k;
    cin>>n>>h>>a>>b>>k;

    while(k--)
    {
        ll ta,fa,tb,fb;
        cin>>ta>>fa>>tb>>fb;
        ll res=0;
        if(ta==tb)
        {
            cout<<abs(fa-fb)<<endl;
            continue;
        }
        else
        {

            res+=abs(ta-tb);
            if(fa>b)
            {
                res+=abs(fa-b);

                res+=abs(fb-b);

            }
            else if(fa<a)
            {
                res+=abs(fa-a);
                res+=abs(fb-a);
            }
            else if(fa<=b and fa>=a)
            {
                res+=abs(fa-fb);
            }
        }
        cout<<res<<endl;
    }
}


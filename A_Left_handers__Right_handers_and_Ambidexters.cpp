#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int l,r,a;
    cin>>l>>r>>a;

    ll minn= min(l,r);
    ll temp=minn;
    ll sum=0;
    for(int i=1;i<=a;i++)
    {
        if(temp==l)
        {
            if(minn==r) break;
        }
        else if(temp==r)
        {
            if(minn==l) break;
        }
        minn++;
    }
    //cout<<minn<<endl;
    sum+=minn;
    sum+=minn;
    //sum+=(max(l,r)-minn);
    if(a-(minn-temp)>0)
    {
        a-=(minn-temp);
        if(a%2==0)
        {
            sum+=(a);
        }
        else
        {
            a--;
            sum+=(a);
        }
    }
    cout<<sum<<endl;
}




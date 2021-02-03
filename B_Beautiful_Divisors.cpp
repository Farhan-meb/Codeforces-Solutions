#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ,res;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            int c, k;

            int one=0,countt=0;

            for (c = 31; c >= 0; c--)
            {
                k = i >> c;

                if (k & 1)
                {
                    // cout<<"1";
                    one++;
                    countt++;

                }
                else
                {
                    //cout<<"0";
                    if(one>0) countt++;
                }

            }
            one=0;
            int zero=0,x=((countt)/2)+1, y = x-1;
            //cout<<x<<" "<<y;
            for (c = 31; c >= 0; c--)
            {
                k = i >> c;

                if (k & 1)
                {
                    // cout<<"1";
                    one++;
                    // countt++;

                }
                else
                {
                    //cout<<"0";
                    if(one==x) zero++;
                }

            }

            if(one==x && zero==y) res=i;
        }
    }

    cout<<res<<endl;


    return 0;
}

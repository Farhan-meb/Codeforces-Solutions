#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        if(n<3)
        {
            cout<<"NO\n";
            continue;
        }

        int temp=n/3;
        int left = n-(temp*3);

        if(left==0)
        {
            cout<<"YES\n";
            continue;
        }
        else
        {
            if(left%7==0)
            {
                cout<<"YES\n";
                continue;
            }
            int flag=0;
            while(true)
            {
                left+=3;
                if(left>n) break;
                if(left%3==0 or left%7==0)
                {
                     cout<<"YES\n";
                     flag=1;
                     break;
                }
            }
            if(flag) continue;
        }

        int antemp=n/7;
        int anleft = n-(antemp*7);
        if(anleft==0)
        {
            cout<<"YES\n";
            continue;
        }
        else
        {
            if(anleft%3==0)
            {
                cout<<"YES\n";
                continue;
            }

            int flag=0;
            while(true)
            {
                anleft+=7;
                //cout<<"anleft = "<<anleft<<endl;;
                if(anleft>n) break;
                if(anleft%3==0 or anleft%7==0)
                {
                     cout<<"YES\n";
                     flag=1;
                     break;
                }
            }
            if(flag) continue;
        }
        cout<<"NO\n";
    }
}

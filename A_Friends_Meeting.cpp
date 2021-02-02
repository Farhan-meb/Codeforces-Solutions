#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int a,b;
    cin>>a>>b;

    if(abs(a-b) == 1)
    {
        cout<<"1\n";
        return 0;
    }
    else if(abs(a-b)==2 )
    {
        cout<<"2\n";
        return 0;
    }
    ll sum=0;
    if(a>=b)
    {
        if((a-b) % 2 == 0)
        {
            int mid = (a-b)/2;

            int x=1;

            for(int i=1;i<mid;i++)
            {
                sum+=i;
            }
            sum+=sum;
            sum+=mid*2;
        }
        else
        {
            int mid = (a-b)/2;

            int x=1;

            for(int i=1;i<=mid;i++)
            {
                sum+=i;
            }
            sum+=sum;
            sum+=mid+1;
        }

    }
    else
    {
        if((b-a) % 2 == 0)
        {
            int mid = (b-a)/2;
            //cout<<mid<<endl;

            int x=1;

            for(int i=1;i<mid;i++)
            {
                sum+=i;
            }
            //cout<<sum<<endl;
            sum+=sum;
            sum+=mid*2;
        }
        else
        {
            int mid = (b-a)/2;

            int x=1;

            for(int i=1;i<=mid;i++)
            {
                sum+=i;
            }
            //cout<<sum<<endl;
            sum+=sum;
            sum+=mid+1;
        }
    }
    cout<<sum<<endl;
}

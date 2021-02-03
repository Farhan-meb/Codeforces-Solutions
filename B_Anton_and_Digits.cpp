#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t2,t3,f5,s6;
    int sum=0;

    cin>>t2>>t3>>f5>>s6;

    if(f5<=t2&&f5<=s6)
    {
        for(int i=0;i<f5;i++) sum+=256;

        if(t2-f5<t3)
        {
            for(int i=0;i<t2-f5;i++) sum+=32;
        }
        else
        {
            for(int i=0;i<t3;i++) sum+=32;
        }
    }
    else if(t2<=f5&&t2<=s6)
    {
        for(int i=0;i<t2;i++) sum+=256;
    }
    else if(s6<=t2&&s6<=f5)
    {
        for(int i=0;i<s6;i++) sum+=256;

        if(t2-s6<t3)
        {
            for(int i=0;i<t2-s6;i++) sum+=32;
        }
        else
        {
            for(int i=0;i<t3;i++) sum+=32;
        }
    }

    cout<<sum<<endl;
}

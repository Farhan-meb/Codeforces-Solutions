#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int N[2000+10];
    int Res[2000+10];

    for(int i=1;i<=n;i++) cin>>N[i];
    int pos=1;
    while(true)
    {
        int maxx=0,c=0;
        for(int i=1;i<=n;i++)
        {
            if(N[i]>maxx) maxx=N[i];
        }
       // cout<<"max = "<<maxx<<endl;
        for(int i=1;i<=n;i++)
        {
            if(N[i]==maxx)
            {
                Res[i]=pos;
                c++;
                N[i]=-1;
            }
        }
        bool flag=false;
        for(int i=1;i<=n;i++)
        {
            //cout<<N[i]<<" ";
            if(N[i]!=-1)
            {
                flag=true;
                break;
            }
        }
        pos+=c;
        if(flag==false) break;

    }
    for(int i=1;i<=n;i++)
    {
        cout<<Res[i];
        if(i==n) cout<<endl;
        else cout<<" ";
    }



}
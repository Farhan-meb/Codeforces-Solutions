#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int N[n+10],flag=0,c=0,d=0;

    for(int i=0; i<n; i++) cin>>N[i];
    int x=N[0],y;
    for(int i=1;i<n;i++)
    {
        if(N[i]!=x)
        {
            y=N[i];
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(N[i]==x) c++;
        else if(N[i]==y) d++;
        else
        {
            flag=1;
            break;
        }
    }
    if(x==y) flag=1;
    if(flag==1) cout<<"NO"<<endl;

    else
    {
        if(c-d==0) cout<<"YES\n"<<x<<" "<<y<<endl;
        else cout<<"NO\n"<<endl;
    }

}

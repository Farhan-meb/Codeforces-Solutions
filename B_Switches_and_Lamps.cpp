#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,m;
    cin>>n>>m;

    char N[n+10][m+10];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            cin>>N[i][j];
    }
    //int c=1;


    map<int,bool>mp;
    for(int i=1; i<=n; i++)
    {
        ll c=0,cc=0;
        for(int j=1; j<=m; j++)
        {
            int ch = N[i][j];

            if(ch=='1')
            {
                //mp[j]=1;
                cc++;
                bool flag=false;
                for(int st=i; st>=1; st--)
                {
                    if(st==i)
                        continue;
                    if(N[st][j]=='1')
                    {
                        c++;
                        flag=true;
                        break;
                    }
                }
                if(!flag)
                {
                    for(int st=i; st<=n; st++)
                    {
                        if(st==i)
                            continue;
                        if(N[st][j]=='1')
                        {
                            c++;
                            flag=true;
                            break;
                        }
                    }
                }

            }
        }
        if(cc==c)
        {
            cout<<"YES\n";
            return 0;
        }

    }


    //c++;

    cout<<"NO\n";



}


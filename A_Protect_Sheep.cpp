#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    char N[510][510];

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++) cin>>N[i][j];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(N[i][j]=='W')
            {
                if(N[i][j+1]=='S' or N[i][j-1]=='S' or N[i-1][j]=='S' or N[i+1][j]=='S')
                {
                    cout<<"NO\n";
                    return 0;
                }
            }
        }
    }
    cout<<"YES\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(N[i][j]=='.') cout<<"D";
            else cout<<N[i][j];
        }
        cout<<endl;
    }
}

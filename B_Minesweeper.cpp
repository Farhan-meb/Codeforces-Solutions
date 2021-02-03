#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
char N[110][110];
    int N1[110][110];
    int N2[110][110];


int dx_hor[]= {+0,+0,+1,-1,-1,+1,-1,+1};
int dy_ver[]= {-1,+1,+0,+0,+1,+1,-1,-1};

int main()
{

    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            char x;
            cin >> x;
            N[i][j] = x;
            if(x=='*' or x=='.')
                N1[i][j]=0;
            else
                N1[i][j]=x-'0';
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(N[i][j] == '*')
            {
                for(int k=0; k<8; k++)
                {
                    int dx = i+dx_hor[k];
                    int dy = j+dy_ver[k];
                    if(dx>=0 and dx<n and dy>=0 and dy<m)
                    {
                        if(N[dx][dy]!='*')
                            N2[dx][dy]++;
                    }
                }
            }
        }
    }
    bool flag=0;


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(N1[i][j]!=N2[i][j])
            {
                flag =1;
                break;
            }
        }
        if(flag)
            break;
    }
    if(flag)
        cout << "NO\n";
    else
        cout << "YES\n";
}

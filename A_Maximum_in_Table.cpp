#include <bits/stdc++.h>
using namespace std;

int N[11][11];

int main()
{
    int n,ab=0,sum=0;;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        N[0][i]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0) N[i][j]=1;
            else
            {
                ab = N[i-1][j];
                sum = N[i][j-1]+ab;
                N[i][j]=sum;

            }
        }
    }

    cout<<N[n-1][n-1]<<endl;
}

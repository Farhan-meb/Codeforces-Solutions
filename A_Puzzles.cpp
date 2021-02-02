#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;

    // int max=0,maxx=0;

    cin>>n>>m;

    int N[m+10];

    for(int i=0; i<m; i++) cin>>N[i];

    for(int i=0; i<m; i++)
    {
        for(int j=i+1; j<m; j++)
        {
            if(N[i]>N[j]) swap(N[i],N[j]);
        }

    }



    //for(int i=0;i<m;i++) cout<<N[i]<<" ";

    int min = N[n-1]-N[0];

    for (int i = 1; i <= m-n; i++)
    {
        if (N[i+n-1] - N[i] < min)
        {
            min = N[i+n-1] - N[i];
        }
    }

    cout<<min<<endl;

}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int N[n+10],NN[n+10],c=0;
    for(int i=1;i<=n;i++)
    {
        cin>>N[i]>>NN[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(N[i]==NN[j])
            c++;
        }
    }
    cout<<c;

    return 0;
}

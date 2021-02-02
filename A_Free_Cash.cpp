#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int N[n+10],M[n+10],c=1,temp=1;

    for(int i=0;i<n;i++)
    {
        cin>>N[i]>>M[i];

    }
    for(int i=0;i<n;i++)
    {
        if(N[i]==N[i-1]&&M[i]==M[i-1])
        {
            c++;
            if(c>temp) temp=c;
        }
        else c =1;
    }
    cout<<temp<<endl;

}

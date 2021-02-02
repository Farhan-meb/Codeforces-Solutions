#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int N[n+10];

    for(int i=0;i<n;i++) cin>>N[i];

    for(int i=0;i<n;i++)
    {
        int key = N[i],c=0;

        for(int j=0;j<n;j++)
        {
            if(i==j) continue;

            int temp = N[j]-N[i];

            if(temp%2!=0) c++;
        }
        if(c==n-1)
        {
            cout<<i+1<<endl;
            break;
        }
    }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int N[n+10];

    for(int i=0;i<n;i++) cin>>N[i];

    int min = N[0], max = N[0], c = 0;

    for(int i=1;i<n;i++)
    {
        if(N[i]>max)
        {
            c++;
            max=N[i];
        }
        else if(N[i]<min)
        {
            c++;
            min = N[i];
        }
    }
    cout<<c<<endl;
}

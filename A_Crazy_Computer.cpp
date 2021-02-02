#include <iostream>

using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;

    int count=0,N[n+10];

    for(int i=0;i<n;i++) cin>>N[i];

    for(int i=0;i<n;i++)
    {
        if(N[i]-N[i-1]<=c) count++;

        else count = 1;

    }

    cout<<count<<endl;
}

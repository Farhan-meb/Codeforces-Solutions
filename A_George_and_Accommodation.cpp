#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x,y,c=0;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(y-x>=2) c++;
    }
    cout<<c<<endl;
}

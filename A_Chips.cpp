#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i=1;

    cin>>n>>k;

    while(1)
    {
        for(int i=1;i<=n;i++)
        {
            if(k-i>=0) k-=i;

            else
            {
                cout<<k<<endl;
                return 0;
            }
        }
    }
    cout<<"0"<<endl;
}

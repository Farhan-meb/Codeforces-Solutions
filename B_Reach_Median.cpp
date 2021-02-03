#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    ll n,k;
    cin>>n>>k;

    int N[n+10];

    for(int i=0; i<n; i++)
        cin>>N[i];

    sort(N,N+n);

    int mid = (n-1)/2;
    ll sum=0;
    if(k>=N[mid])
    {
        for(int i=mid; i<n; i++)
        {
            if(N[i]<k)
            {
                sum+=(k-N[i]);
            }
            else
                break;
        }
    }
    else
    {
        sum+=N[mid]-k;
        for(int i=mid-1;i>=0;i--)
        {
            if(N[i]>k)
            {
                sum+=N[i]-k;
            }
            else break;
        }
    }
    cout<<sum<<endl;
}

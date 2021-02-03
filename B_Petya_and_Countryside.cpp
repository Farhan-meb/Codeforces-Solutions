#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin>>n;

    int N[1010];

    for(int i=1;i<=n;i++) cin>>N[i];

    int ans=0;

    for(int i=1;i<=n;i++)
    {
        int c=1;
        int pos=1;
        for(int j=i+1;j<=n;j++)
        {
            if(N[j]>=N[j-1])
            {
                c++;
                pos=j;
            }
            else break;
        }
        for(int j=pos+1;j<=n;j++)
        {
            if(N[j]<=N[j-1])
            {
                c++;
                pos = j;
            }
            else break;
        }
       // i+=pos;
        ans = max(c,ans);
    }

    cout<<ans<<endl;
}

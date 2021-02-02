#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans=0;
    int c=0;
    int prev=10000000000;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x<prev)
        {
            ans=max(ans,c);
            c=0;
        }
        prev=x;
        c++;
    }
    ans=max(ans,c);
    printf("%d",ans);
}

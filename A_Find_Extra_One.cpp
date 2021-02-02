#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,c1=0;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin >> x >> y;
        if(x<0)
            c++;
        else
            c1++;
    }
    if(c==n || c1==n || c==1 || c1==1) cout << "Yes\n";
    else cout << "No\n";
}

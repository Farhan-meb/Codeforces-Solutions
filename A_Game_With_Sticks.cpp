#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    if(n>=m && m%2==0) cout<<"Malvika\n";

    else if(n<=m && n%2==0) cout<<"Malvika\n";

    else cout<<"Akshat\n";

    return 0;
}

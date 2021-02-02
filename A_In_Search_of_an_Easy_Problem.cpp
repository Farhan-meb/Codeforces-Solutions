#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool f=0;
    while(n--)
    {
        int x;
        cin>>x;
        if(x==1) f=1;
    }
    if(f) cout<<"HARD\n";
    else cout<<"EASY\n";
}

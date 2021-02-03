#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    ll maxx=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;

        if(a+b>=maxx) maxx=a+b;
    }
    cout<<maxx<<endl;


}

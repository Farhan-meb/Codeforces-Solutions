#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int x = a+b+c;
    int y=a*b*c;
    int z=a*(b+c);
    int fcuk=(a+b)*c;

    if(x>=y&&x>=z&&x>=fcuk) cout<<x;
    else if(y>=z&&y>=z&&y>=fcuk) cout<<y;
    else if(z>=x&&z>=y&&z>=fcuk) cout<<z;
    else if(fcuk>=x&&fcuk>=y&&fcuk>=z) cout<<fcuk;

}

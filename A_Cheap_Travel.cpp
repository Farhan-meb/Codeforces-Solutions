#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    if(m*a > b)
    {
        int temp = (n % m) * a;
        
        if(temp > b) cout<<(n/m)*b+b<<endl;
        
        else cout<<(n/m)*b+temp<<endl;
    }
    
    else cout<<n*a<<endl;

    return 0;
}

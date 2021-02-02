#include <bits/stdc++.h>
using namespace std;


int main()
{

    long long n, k;
    cin>>n>>k;

    if(n%2==0)
    {
        if(k>(n/2))
        {
            k = (k - n/2);
            cout << k+k<<endl;
        }
        else
            cout << (k+k)-1<<endl;
    }
    else
    {
        if(k>(n/2)+1)
        {
            k = (k - n/2) - 2;
            cout << k+2+k<<endl;
        }
        else
            cout << (k+k)-1<<endl;
    }

}

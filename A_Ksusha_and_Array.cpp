#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,i;
    cin>>n;

    int N[n+10];

    for(i=0; i<n; i++) cin>>N[i];

    sort(N, N+n);


    int number = N[0];

    int flag=0;

    for(i=1; i<n; i++)
    {
        if(N[i]%number!=0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1) cout<<"-1\n";
    else cout<<number<<endl;


}


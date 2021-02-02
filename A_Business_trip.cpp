#include <iostream>

using namespace std;

int main()
{
    int k;
    cin>>k;
    int N[13]={0};

    for(int i=0;i<12;i++) cin>>N[i];

    for(int i=0;i<12;i++)
    {
        for(int j=i+1;j<12;j++)
        {
            if(N[i]>N[j]) N[i]^=N[j],N[j]^=N[i],N[i]^=N[j];
        }
    }
    int sum=0,c=0;
    for(int i=11;i>=0;i--)
    {
        if(sum>=k) break;
        sum+=N[i];
        c++;


    }

    if(sum>=k) cout<<c<<endl;
    else cout<<"-1"<<endl;

    return 0;
}

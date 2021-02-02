#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    int N[n+10];

    for(int i=0;i<n;i++) cin>>N[i];

    int j,temp;
    for(int i=1;i<n;i++)
    {
        temp=N[i];
        j=i-1;

        while(j>=0 && N[j]>temp)
        {
            swap(N[j+1],N[j]);
            j--;
        }

    }

    int x=N[b-1],res=N[b]-N[b-1];


     if(N[b]==x) cout<<"0\n"<<endl;
     else cout<<res<<endl;
}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int N[n+10];
    for(int i=0;i<n;i++) cin>>N[i];
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(N[i]>N[j]) swap(N[i], N[j]);
            }
        }
        for(int i=0;i<n;i++) cout << N[i] <<" ";
        cout<<endl;
        
        return 0;
}
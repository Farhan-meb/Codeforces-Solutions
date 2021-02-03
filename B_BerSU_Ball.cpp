#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int N[100+10];
    for(int i=0; i<n; i++) cin>>N[i];
    cin>>m;
    map<int,int>flag;
    int M[110];
    for(int i=0; i<m; i++)
    {
        cin>>M[i];
        flag[M[i]]++;
    }
    //for(int j=0; j<m; j++) cout<<flag[M[j]]<<" ";
    int c=0;
    //cout<<endl;
    sort(N,N+n);
    sort(M,M+m);

    for(int i=0; i<n; i++)
    {
        int key = N[i];
       // cout<<"key = "<<key<<endl;
        for(int j=0; j<m; j++)
        {
            if(flag[M[j]]>0)
            {
                int diff = max(N[i],M[j])-min(N[i],M[j]);
                if(diff==0||diff==1)
                {
                    c++;
                    flag[M[j]]--;
                   // cout<<"diff = "<<diff<<endl;
                    break;
                }

            }
        }
    }
    cout<<c<<endl;
}

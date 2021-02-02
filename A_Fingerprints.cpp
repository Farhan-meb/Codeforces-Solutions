#include<bits/stdc++.h>
using namespace std;




int main()
{
    int n,m;
    cin>>n>>m;

    int N[15],M[15];

    for(int i=0;i<n;i++) cin>>N[i];

    for(int i=0;i<m;i++) cin>>M[i];

    vector<int>res;

    for(int i=0;i<n;i++)
    {
        int key=N[i];

        for(int j=0;j<m;j++)
        {
            if(N[i]==M[j])
            {
                res.push_back(key);
                M[j]=-1;
            }
        }
    }

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
        if(i==res.size()-1) cout<<endl;
        else cout<<" ";
    }
}

#include <bits/stdc++.h>
using namespace std;
vector<int>v[1000+10];

int bfs(int src)
{
    queue<int>q;

    q.push(src);

    while(!q.empty())
    {
        int temp = q.front();

        q.pop();


        if(v[temp].size()<3)
        {
            cout<<"NO\n";
            return 0;
        }
        else
        {
            int c=0;
            for(int i=0; i<v[temp].size(); i++)
            {
                int node = v[temp][i];
                if(v[node].size()==0) c++;
                else q.push(node);

            }
            if(c<3)
            {
                cout<<"NO\n";
                return 0;
            }
        }




    }
    cout<<"YES"<<endl;
    return 0;
}

int main()
{
    int n;
    cin>>n;


    int start;
    for(int i=0; i<n-1; i++)
    {

        int x;
        cin>>x;
        if(i==0) start = x;
        v[x].push_back(i+2);
    }
//    cout<<"start : "<<start<<endl;
//    for(int i=0;i<n-1;i++)
//    {
//        cout<<v[i].size()<<" ";
//    }

    bfs(start);

}

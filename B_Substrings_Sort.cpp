#include<bits/stdc++.h>
using namespace std;


#define MAX          (int)1e5+10
#define MIN          -(int)1e5+10
#define ll           long long
#define pii          pair<ll,ll>
#define sf(a)        scanf("%d",&a)
#define pf(a)        printf("%d\n",a)
#define mem(a,b)     memset(a,b,sizeof(a))
#define all(x)       x.begin(),x.end()
#define rall(x)      x.rbegin(),x.rend()
#define pb           push_back
map<int,bool>mp;

int main()
{
    int n;
    cin>>n;

    string s[100+10];

    for(int i=1; i<=n; i++)
    {
        cin>>s[i];
    }
    bool flag=0;
    //vector<string>res[110];
    string res[110];
    int sz=0;
    for(int i=1; i<=n; i++)
    {
        int minn=110,trac=1;
        for(int j=1; j<=n; j++)
        {
            if(s[j]!="-1")
            {
                if(s[j].size()<minn)
                {
                    minn=s[j].size();
                    trac = j;
                }
            }
        }
        res[sz]+=s[trac];
        sz++;

        //cout<<minn<<endl;


        if(i!=1)
        {
            for(int j=0; j<sz; j++)
            {
                string secondString = res[j];
                string firstString = s[trac];
                bool check=0;
                for(int x=0;x<s[trac].size();x++)
                {

                    string temp="\0";
                    for(int y=x;y<s[trac].size();y++)
                    {
                        temp+=s[trac][y];
                        if(temp==secondString)
                        {
                            check=1;
                            break;
                        }
                    }
                    temp.clear();
                }
                if(check)
                {
                    continue;
                }
                else
                {
                    //cout<<endl<<firstString<<"   "<<secondString<<endl;
                    flag=1;
                    break;
                }

            }
        }
        if(flag)
            break;
        s[trac] = "-1";
    }
    if(flag)
    {
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    for(int i=0; i<sz; i++)
    {
        cout<<res[i]<<endl;
    }


}


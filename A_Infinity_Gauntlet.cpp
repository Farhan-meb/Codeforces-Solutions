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
map<string,bool>mp;
map<string,string>res;
int main()
{


    int n;
    cin>>n;

    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        mp[s]=1;
    }

    string check[100] = {"purple","green","blue","orange","red","yellow"};

    int c=0;
    res[check[0]] = "Power";
    res[check[1]] = "Time";
    res[check[2]] = "Space";
    res[check[3]] = "Soul";
    res[check[4]] = "Reality";
    res[check[5]] = "Mind";

    for(int i=0;i<6;i++)
    {
        if(mp[check[i]]==0)
        {
            c++;
        }
    }


    cout<<c<<endl;
    for(int i=0;i<6;i++)
    {
        if(mp[check[i]]==0)
        {
            //c++;
            string x= check[i];
            cout<<res[x]<<endl;
        }
    }

}

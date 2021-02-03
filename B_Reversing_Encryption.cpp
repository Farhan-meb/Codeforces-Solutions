#include<bits/stdc++.h>
using namespace std;


#define MAX          (int)1e5+10
#define MIN          -(int)1e5+10
#define ll           long long
#define pii          pair<ll,ll>
#define sf(a)        scanf("%d",&a)
#define pf(a)        printf("%d",a)
#define spc          printf(" ")
#define nl           printf("\n");
#define mem(a,b)     memset(a,b,sizeof(a))
#define all(x)       x.begin(),x.end()
#define sortv(x)     sort(x.begin(),x.end())
#define sortvr(x)    sort()x.rbegin(),x.rend())
#define pb           push_back

int main()
{
    int n;
    cin>>n;
    getchar();
    string s;
    cin>>s;

    //reverse(s.begin(),s.end());
    //cout<<s<<endl;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            string temp = "\0";
            for(int j=0;j<i;j++) temp+=s[j];

            reverse(temp.begin(),temp.end());

            for(int j=0;j<i;j++) s[j] = temp[j];

            //cout<<s<<endl;
        }
       // cout<<s<<endl;
    }
    cout<<s<<endl;

}


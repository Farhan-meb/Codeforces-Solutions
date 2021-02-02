#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s,ss;
    cin>>s>>ss;

    ll num=0;

    for(int i=0; i<s.size(); i++)
    {
        num*=10;
        num+=(s[i]-48);
    }

    ll sum=0;
    sum+=num;
    num=0;
    for(int i=0; i<ss.size(); i++)
    {
        num*=10;
        num+=(ss[i]-48);
    }
    sum+=num;

    ll temp=sum;
    vector<int>hehe;
    while(true)
    {
        if(temp<=0) break;
        int x=temp%10;
        temp/=10;
        hehe.push_back(x);
    }
    ll sum1=0;
    num=0;
    for(int i=hehe.size()-1;i>=0;i--)
    {
        if(hehe[i]==0) continue;
        num*=10;
        num+=(hehe[i]);
    }
    sum1+=num;
    num=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0') continue;
        num*=10;
        num+=(s[i]-48);
    }
    ll sum2=0;
    sum2+=num;
    num=0;
    for(int i=0; i<ss.size(); i++)
    {
        if(ss[i]=='0') continue;
        num*=10;
        num+=(ss[i]-48);
    }
    sum2+=num;
   // cout<<sum1<<"  "<<sum2<<endl;
    if(sum1==sum2) cout<<"YES\n";
    else cout<<"NO\n";

}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    char s[n+10];
    cin>>s;

    while(t--)
    {
        for(int i=0;i<n;)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i+=2;
            }
            else i++;
        }
    }
    cout<<s;

}

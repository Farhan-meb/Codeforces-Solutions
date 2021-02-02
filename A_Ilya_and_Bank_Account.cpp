#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    if(s[0]!='-')
    {
        cout<<s<<endl;
        return 0;
    }


    for(int i=0;i<s.size();i++)
    {

        if(i==s.size()-2)
        {
            int a=s[i]-48,b=s[i+1]-48;
            if(a>=b)
            {
                swap(s[i],s[i+1]);
            }
        }

    }
    if(s[1]=='0')
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<s.size()-1;i++)
    {
        cout<<s[i];
    }
    cout<<endl;

}

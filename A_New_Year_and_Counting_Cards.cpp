#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int c=0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            c++;
        }
        if(s[i]>='0'&&s[i]<='9')
        {
            if((s[i]-48)%2!=0) c++;
        }

    }

    cout<<c<<endl;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int c=0;
    for(int i=s1.size()-1,j=s2.size()-1;i>=0,j>=0;i--,j--)
    {
        if(i==-1 or j==-1) break;
        if(s1[i]==s2[j])
        {
            c++;
        }
        else break;
    }
    //cout<<c<<endl;
    cout<<((s1.size())-c)+((s2.size())-c)<<endl;


}


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int c=0,A,Q;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='Q')
        {

            for(int j=i+1; j<s.size(); j++)
            {
               if(s[j]=='A')
               {
                   for(int k=j+1;k<s.size();k++)
                   {
                       if(s[k]=='Q') c++;
                   }
               }
            }
        }
    }
    cout<<c<<endl;
}

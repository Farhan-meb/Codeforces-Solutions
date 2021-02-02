#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int x = s.size();


    int c=0;
    for(int i=0,j=x-1; i<=x/2,j>=x/2; i++,j--)
    {
        if(s[i]!=s[j]) c++;
        //cout<<s[i]<<"  "<<s[j]<<endl;

        if(c>1)
        {
            cout<<"NO\n";
            return 0;
        }
    }

    if(c==1) cout<<"YES\n";
    else if(c==0 and x%2!=0) cout<<"YES\n";
    else cout<<"NO\n";


}

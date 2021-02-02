#include <bits/stdc++.h>

using namespace std;
int main()
{
    char N[110];

    cin>>N;
    int flag=0,x=strlen(N);


    for(int i=0; i<x; i++)
    {
        if(N[i]=='0'&&N[i+1]=='0'&&N[i+2]=='0'&&N[i+3]=='0'&&N[i+4]=='0'&&N[i+5]=='0'&&N[i+6]=='0')
        {
            flag=1;
            break;
        }
        else if(N[i]=='1'&&N[i+1]=='1'&&N[i+2]=='1'&&N[i+3]=='1'&&N[i+4]=='1'&&N[i+5]=='1'&&N[i+6]=='1')
        {

            flag=1;
            break;


        }
    }
    if(flag==1) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}

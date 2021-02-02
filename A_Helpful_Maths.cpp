#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[110];
    cin>>s;
    int x=strlen(s);

    for(int i=0;i<x;i++)
    {
        for(int j=i+2;j<x;j+=2)
        {
            if(s[i]>s[j])
            {
                swap(s[i],s[j]);
            }
        }
    }
    cout<<s<<endl;

    return 0;
}

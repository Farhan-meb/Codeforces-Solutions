#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    string s;
    int n;
    cin >> n;
    cin >> s;
    int nl=s.size();
    int c=0,cc=0;
    for(int i=0; i<nl; i++)
    {
        if(s[i]=='1')c++;
        else cc++;
        if(c==2)
        {
            c=1;
        }
    }
    while(c--)
    {
        cout <<'1';
    }
    if(cc==0) cout << endl;
    else
    {
        for(int i=0; i<cc; i++)
        {
            cout <<'0';
            if(i==cc)cout <<endl;
        }
    }


}

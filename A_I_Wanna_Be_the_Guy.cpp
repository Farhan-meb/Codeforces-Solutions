#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int freq[n+10];
    for(int i=1;i<=n;i++) freq[i] = 0;

    int xy,elements,flag=0;

    for(int i=1;i<=2;i++)
    {
        cin >> xy;
        for(int j=1;j<=xy;j++)
        {
            cin >> elements;
            freq[elements]++;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(freq[i]==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1) cout << "Oh, my keyboard!";

    else cout << "I become the guy.";
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    cin >> n;

    int N[n+10],max=0,sum=0;

    for(int i=0;i<n;i++)
    {
        cin >> N[i];

        if(N[i]>max)
        {
            max=N[i];
        }
    }

    for(int i=0;i<n;i++)
    {
        sum += (max-N[i]);
    }

    cout << sum << endl;

    return 0;
}

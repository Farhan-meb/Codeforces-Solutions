#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n, c, k, space = 1;

    cin>>n;

    space = n;

    for (k = 1; k <= n; k++)
    {
        for (c = 1; c <= space*2; c++)
            printf(" ");

        space--;
        int x=0;
        for (c = 1; c <= 2*k-1; c++)
        {
            if(c!=(2*k-1))
            {
                if(c<k)
                {
                    cout<<x<<" ";
                    x++;
                }
                else if(c==k) cout<<x<<" ";
                else
                {
                    x--;
                    cout<<x<<" ";
                }
            }
            else
            {
                if(c<k)
                {
                    cout<<x;
                    x++;
                }
                else if(c==k) cout<<x;
                else
                {
                    x--;
                    cout<<x;
                }
            }
        }
        cout<<endl;
    }



//cout<<"ok1\n";
    int l=0;
    for (int c = 1 ; c <= 2*n+1; c++)
    {
        if(c!=(2*n+1))
        {
            if(c<k)
            {
                cout<<l<<" ";
                l++;
            }
            else if(c==k) cout<<l<<" ";
            else
            {
                l--;
                cout<<l<<" ";
            }
        }
        else
        {
            if(c<k)
            {
                cout<<l;
                l++;
            }
            else if(c==k) cout<<l;
            else
            {
                l--;
                cout<<l;
            }
        }
    }
    cout<<endl;
//cout<<"ok2\n";

    space = 1;

    for (k = n; k >= 0; k--)
    {
        for (c = 1; c <= space*2; c++)
            printf(" ");

        space++;
        int x=0;
        for (c = 1 ; c <= 2*k-1; c++)
        {
            if(c!=(2*k-1))
            {
                if(c<k)
                {
                    cout<<x<<" ";
                    x++;
                }
                else if(c==k) cout<<x<<" ";
                else
                {
                    x--;
                    cout<<x<<" ";
                }
            }
            else
            {
                if(c<k)
                {
                    cout<<x;
                    x++;
                }
                else if(c==k) cout<<x;
                else
                {
                    x--;
                    cout<<x;
                }
            }
        }

        cout<<endl;
    }

    return 0;
}

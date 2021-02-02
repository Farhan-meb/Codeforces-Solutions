#include <bits/stdc++.h>

using namespace std;

int main()
{

        int a,b,sum=0,c=0;
        cin>>a>>b;

        while(a--)
        {
            if(c%b==0)
            {
                a++;
                c=0;
            }
            c++;
            sum++;
        }
        cout<<sum-1<<endl;


    return 0;
}

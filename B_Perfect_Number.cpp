
#include <bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int n;
    cin>>n;

    int i=10,c=0;

    while(true)
    {
        i+=10;
        i--;
        long long sum=0,num=i;
        while (num != 0)
        {
            sum = sum + num % 10;
            num = num / 10;
        }

        if(sum==10)
        {
            c++;
        }
        if(c==n)
        {
            cout<<i<<endl;
            return 0;
        }
    }
}


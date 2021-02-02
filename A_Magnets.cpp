#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int num,c=1,x=0;


    for(int i=0;i<n;i++)
    {
        cin>>num;

        if(num==10 && x==01 ) c++;
        else if(num==01 && x==10) c++;

        x = num;

    }
    cout<<c<<endl;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long s1,s2,s3,s4,c=0;


    cin>>s1>>s2>>s3>>s4;


    if(s1==s2 || s1==s3 || s1==s4) c++;

    if(s2==s3 || s2==s4) c++;

    if(s3==s4) c++;

    cout<<c<<endl;

    return 0;
}

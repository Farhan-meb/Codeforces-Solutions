#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string ss;
    cin>>ss;
    int n;
    cin>>n;

    string s[15];
    s[1] = "January";
    s[2] = "February";
    s[3] = "March";
    s[4] = "April";
    s[5] = "May";
    s[6] = "June";
    s[7] = "July";
    s[8] = "August";
    s[9] = "September";
    s[10] = "October";
    s[11] = "November";
    s[12] = "December";

    if(ss=="January") n+=1;
    if(ss=="February") n+=2;
    if(ss=="March") n+=3;
    if(ss=="April") n+=4;
    if(ss=="May") n+=5;
    if(ss=="June") n+=6;
    if(ss=="July") n+=7;
    if(ss=="August") n+=8;
    if(ss=="September") n+=9;
    if(ss=="October") n+=10;
    if(ss=="November") n+=11;
    if(ss=="December") n+=12;
    //cout<<n<<endl;
    while(true)
    {
        if(n<=12) break;
        n-=12;
    }
    //cout<<n<<endl;

    cout<<s[n]<<endl;




}
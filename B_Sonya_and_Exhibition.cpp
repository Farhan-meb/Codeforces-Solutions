#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
   ll flowers,visitors;
   cin>>flowers>>visitors;
    ll li,ri;
   while(visitors--)
   {
       cin>>li>>ri;
   }

   for(int i=1;i<=flowers;i++)
   {
       if(i%2) cout<<0;
       else cout<<1;
   }

}





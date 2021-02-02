#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,ch=0,bi=0,ba=0;
    cin>>n;

    int N[n+10];

    for(int i=1; i<=n; i++) cin>>N[i];
    int x=1,y=2,z=3;
    if(n<3)
    {
        if(n==1) ch+=N[1];
        else if(n==2)
        {
           ch+=N[1];
           bi+=N[2];
        }

        if(ch>bi) cout<<"chest\n";
        else cout<<"biceps\n";
        return 0;
    }



    if(n%3==0)
    {
        n/=3;
        //cout<<n;

        for(int i=1; i<=n; i++)
        {
            ch+=N[x];
            bi+=N[y];
            ba+=N[z];
            x+=3;
            y+=3;
            z+=3;
        }
        if(ch>=bi&&ch>=ba) cout<<"chest\n";
        else if(bi>=ba&&bi>=ch) cout<<"biceps\n";
        else cout<<"back\n";

    }
    else
    {
        int c=0;
        //int temp =n;
        while(1)
        {
            if(n%3==0) break;
            n--;
            c++;
        }
        //cout<<n<<c;

        int tempp=n;
        n/=3;
        for(int i=1; i<=n; i++)
        {
            ch+=N[x];
            bi+=N[y];
            ba+=N[z];
            x+=3;
            y+=3;
            z+=3;
        }
        if(c==1)
        {
            ch+=N[tempp+1];
        }
        else if(c==2)
        {
            ch+=N[tempp+1];
            bi+=N[tempp+2];
        }

        if(ch>=bi&&ch>=ba) cout<<"chest\n";
        else if(bi>=ba&&bi>=ch) cout<<"biceps\n";
        else cout<<"back\n";
    }




    return 0;
}









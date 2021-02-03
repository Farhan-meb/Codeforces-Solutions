#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll grid = (n*m);
    ll exstep = k%(grid);

    if(exstep==0)
    {
        cout<<1<<" "<<1<<endl;
        return 0;
    }


    if(exstep<=n-1)
    {
        cout<<exstep+1<<" "<<1<<endl;
        return 0;
    }
    else if(exstep<=(n-1)+(m-1))
    {
        ll sum=(n-1),hi=1;
        while(sum++)
        {

            if(sum==exstep)
            {
                cout<<n<<" "<<hi+1<<endl;
                return 0;
            }
            hi++;
        }
    }

    else
    {
        //cout<<"ok\n";
        ll step = (n-1)+(m-1),trac=n-1;
        //cout<<step<<endl;

        while(1)
        {
            step+=(m-1);
            if(step>=exstep)
            {
                if(trac%2==0)
                {
                    ll ex = step-exstep;

                    cout<<trac<<" "<<((m)-ex)<<endl;
                    return 0;
                }
                else
                {
                    ll ex = (step-exstep);
                    //cout<<ex<<endl;
                    cout<<trac<<" "<<(ex+2)<<endl;
                    return 0;
                }
                return 0;
            }
            trac--;
        }


    }

}


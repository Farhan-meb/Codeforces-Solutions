#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int xzero=0,yzero=0,xone=0,yone=0,x;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>x;

            if(j==0)
            {
                if(x==0)
                {
                    xzero++;
                    //cout<<"xzero == "<<xzero<<endl;
                }
                else
                {
                    xone++;
                    //cout<<"xone == "<<xone<<endl;
                }
            }
            else
            {
                if(x==0)
                {
                    yzero++;
                    //cout<<"yzero == "<<yzero<<endl;
                }
                else
                {
                    yone++;
                    //cout<<"yone == "<<yone<<endl;
                }
            }
        }
    }

    //cout<<endl<<xzero<<" "<<xone<<endl<<endl<<yzero<<" "<<yone<<endl<<endl;
    int sum=0;

    if(xzero>=xone) sum+=xone;
    else if(xone>xzero) sum+=xzero;

    if(yzero>=yone) sum+=yone;
    else if(yone>yzero) sum+=yzero;

    cout<<sum<<endl;


}

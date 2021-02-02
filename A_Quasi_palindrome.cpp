#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, temp;
    cin >> s;
    if(s.length()==1)
    {
        cout << "YES";
        return 0;
    }
    int upl = 2* s.length();

    while(s.length()<=upl)
    {
        temp = s;
        reverse(s.begin(), s.end());

        if(s==temp)
        {
            cout << "YES";
            return 0;
        }
        else
        {
            temp.insert(temp.begin(), '0');
            s = temp;
        }
    }
    cout << "NO";
}

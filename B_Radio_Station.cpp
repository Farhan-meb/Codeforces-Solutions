#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string name, s;
    map <string, string> mp;
    for(int i=0;i<n;i++)
    {
        cin >> name >> s;
        s+=';';
        mp[s]=name;
    }
    for(int i=0;i<m;i++)
    {
        cin >> name >> s;
        cout << name << " " << s << " #" << mp[s] << endl;
    }
}
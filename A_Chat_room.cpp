#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s,hello="hello";

	cin>>s;

	int x = s.length();

	for(int i=0,j=0;i<x;i++)
	{
		if(hello[j]==s[i])
		{
			j++;

			if(j==5)
			{
				cout<<"YES";
				return 0;
			}
		}

	}
	cout<<"NO";

	return 0;
}

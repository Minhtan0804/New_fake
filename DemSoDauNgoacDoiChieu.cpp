#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str; cin >> str;
		
		stack<char> s;
		int count = 0;
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == '(') 
				s.push(str[i]);
			else {
				if (!s.empty()) 
					s.pop();
				else {
					s.push('(');
					count++;
				} 
			}
		}
		
		cout << count + s.size()/2;

		cout << "\n";
	}
	return 0;
}


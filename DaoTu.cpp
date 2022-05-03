#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str;
		getline(cin >> ws, str);
		
		stack<string> s;
		stringstream ss(str);
		string token;
		
		while(ss >> token)
		{
			s.push(token);
		}
		
		while(!s.empty())
		{
			cout << s.top() << " ";
			s.pop();
		}


		cout << endl;
	}
	return 0;
}


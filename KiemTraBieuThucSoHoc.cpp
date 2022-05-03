#include<bits/stdc++.h>
using namespace std;

bool checkEx(string str)
{
	stack<int> st;
	
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(') st.push(i);
		else if (str[i] == ')')
		{
			int j = st.top();
			st.pop();
			if (i-j == 2) return false;
			if (str[j+1] == '(' && str[i-1] == ')') return false;
		}
	}
	return true;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str; getline(cin >> ws, str);
		
		if (checkEx(str)) cout << "No";
		else cout << "Yes";

		cout << endl;
	}
	return 0;
}


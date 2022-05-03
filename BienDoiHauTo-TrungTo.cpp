#include<bits/stdc++.h>
using namespace std;

void postfix_to_infix(string str)
{
	stack<string> st;
	
	for (int i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]))
		{
			string s; 
			s += str[i];
			st.push(s);
		}
		else {
			string s1 = st.top(); st.pop();
			string s2 = st.top(); st.pop();
			st.push("(" + s2 + str[i] + s1 + ")");
		}
	}
//	string ans = st.top();
//	reverse(ans.begin(), ans.end());
//	cout << ans;
	cout << st.top();
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str; getline(cin >> ws, str);
		
		postfix_to_infix(str);
		cout << endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

void prefix_to_infix(string str)
{
	stack<string> st;
	
	for (int i = str.length()-1; i >= 0; i--)
	{
		if (isalpha(str[i])) st.push(string(1, str[i]));
		else {
			string s1 = st.top(); st.pop();
			string s2 = st.top(); st.pop();
			st.push("(" + s1 + str[i] + s2 + ")");
		}
	}
	
	cout << st.top();
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str; getline(cin >> ws, str);
		
		prefix_to_infix(str);
		cout << endl;
	}
	return 0;
}



#include<bits/stdc++.h>
using namespace std;

void solve_postfix(string str)
{
	stack<int> st;

	for (int i = 0; i < str.length(); i++)
	{
		if(isdigit(str[i])) st.push(str[i] - '0');
		else {
			int h = st.top(); st.pop();
			int k = st.top(); st.pop();
			
			switch(str[i])
			{
				case '+':
					st.push(k+= h);
					break;
				case '-':
					st.push(k-= h);
					break;
				case '*':
					st.push(k*= h);
					break;
				case '/':
					st.push(k/= h);
					break;
			}
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
		
		solve_postfix(str);
		cout << endl;
	}
	return 0;
}


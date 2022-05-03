#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str; cin >> str;
		
		stack<int> st;
		
		for (int i = 0; i <= str.length(); i++)
		{
			// Day i+1 vap ngan xep
			st.push(i+1);
			
			// Neu i la ki tu cuoi cung hoac ki tu do la I 
			// hay day ra khoi ngan xep den khi ngan xep rong
			if(i == str.length() || str[i] == 'I')
			{
				while(!st.empty())
				{
					cout << st.top();
					st.pop();
				}
			}
		}

		cout << endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str; cin >> str;
		
		stack<int> st;
		
		for (int i = str.length()-1; i >= 0; i--)
		{
			if (isdigit(str[i])) st.push(str[i]-'0');
			else {
				int h = st.top(); st.pop();
				int k = st.top(); st.pop();
				switch(str[i])
				{
					case '+':
						st.push(h+= k);
						break;
					case '-':
						st.push(h-= k);
						break;
					case '*':
						st.push(h*= k);
						break;
					case '/':
						st.push(h/= k);
						break;
				}	
			}
		}

		cout << st.top();
		cout << endl;
	}
	return 0;
}


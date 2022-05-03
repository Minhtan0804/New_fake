#include<bits/stdc++.h>
using namespace std;
void prefix_to_postfix(string str)
{
	stack<string> st;
	
	// Duyet nguoc chuoi tu phai qua trai
	for (int i = str.length()-1; i >= 0; i--)
	{
		// Neu ki tu la toan hnag day no vao stack
		if (isalpha(str[i])) st.push(string(1, str[i]));
		
		// Neu ki tu khong phai la toan hang, hay lay ra hai toan hang tu stack.
		// Tao chuoi bang cach noi hai toan hang
		// string = operand1 + operand2 + operator
		// Day string vao lai trong stack
		else {
			string s1 = st.top(); st.pop();
			string s2 = st.top(); st.pop();
			st.push(s1 + s2 + str[i]);
		}
	}
	
	// Xuat ra chuoi tren cung cua stack.
	cout << st.top();
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str; getline(cin >> ws, str);
		
		prefix_to_postfix(str);
		cout << endl;
	}
	return 0;
}


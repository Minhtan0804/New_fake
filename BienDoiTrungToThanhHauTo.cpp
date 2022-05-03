#include<bits/stdc++.h>
using namespace std;

int prec(char c)
{
	if (c == '^') return 3;
	if (c == '/' || c == '*') return 2;
	if (c == '+' || c == '-') return 1;
	return -1;
}

void infix_to_postfix(string str)
{
	stack<char> st;
	
	// Kiem tra infix tu trai sang phai
	for (int i = 0; i < str.length(); i++)
	{
		char c = str[i];
		
		// Neu gap ki tu la mot toan hang thi xuat ra
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) cout << c;
		
		// Neu ki tu la '(', push vao stack
		else if (c == '(') st.push(c);
		
		// Neu ki tu la ')', xuat ra den khi gap '(' va loai bo '('
		else if (c == ')')
		{
			while (st.top() != '(')
			{
				cout << st.top();
				st.pop();
			}
			st.pop();
		} 
		
		// Khac
		// Neu muc uu tien cua ki tu lon hon muc uu tien cua toan tu tren cung trong
		// ngan xep, hay push vao stack
		else {
			//Neu muc uu tien cua ki tu nho hon hoac bang muc uu tien cua toan tu tren cung trong
		// ngan xep, hay xuat ra den khi do uu tien thay doi lon hon hoac stack rong
			while(!st.empty() && prec(c) <= prec(st.top()))
			{
				cout << st.top();
				st.pop();
			}
			st.push(c);
		}
	}
	// Xuat ra cho den khi stack rong
	while(!st.empty())
	{
		cout << st.top();
		st.pop();
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str; getline(cin >> ws, str);
		
		infix_to_postfix(str);
		cout << endl;
	}
	return 0;
}


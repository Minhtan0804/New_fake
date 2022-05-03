#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str; cin >> str;
		
		// Tao stack rong va day -1 vao do
		stack<int> st;
		st.push(-1);
		
		// Khoi tao ket qua la 0
		int count = 0;
		
		
		// Duyet chuoi tu trai qua phai
		for (int i = 0; i < str.length(); i++)
		{
			
			// Neu ki tu la '(' hay day index (chi so cua ki tu) vao ngan xep
			if (str[i] == '(') st.push(i);
			else {
				
				// Neu ki tu la ')', hay day ra gia tri tren cung cua stack
				st.pop();
				
				// Neu stack khong rong, so sanh ket qua hien tai
				// va hieu cua chi so hien tai voi gia tri dau syack
				if(!st.empty()) {
					count = max(count, i-st.top());
				} 
				
				// Neu stack rong, hay day chi so vao stack.
				else {
					st.push(i);
				}
			}
		}
		
		cout << count << endl;
	}
	return 0;
}


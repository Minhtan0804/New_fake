#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int A[n];
		for (int i = 0; i < n; i++) cin >> A[i];
		
		stack<int> st;
		stack<int> ans;
		for (int i = n-1; i >= 0; i--)
		{
			// kiem tra ngan xep co rong khong
			// va neu phan tu tren cung nho hon phan tu dang xet 
			// day ra khoi ngan xep
			while(!st.empty() && st.top() <= A[i]) st.pop();
			
			// neu ngan xep khong rong
			// day vao ket qua
			if (!st.empty()) ans.push(st.top());
			
			// neu rong day -1 vao ket qua
			else ans.push(-1);
			
			// day phan tu dang xet vao ngan xep
			st.push(A[i]);
		}
		
		while(!ans.empty())
		{
			cout << ans.top() << " ";
			ans.pop();
		}

		cout << endl;
	}
	return 0;
}


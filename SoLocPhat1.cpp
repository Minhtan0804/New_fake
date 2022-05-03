#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		n++;
		queue<string> q;
		q.push("0");
		vector<string> ans;
		
		while(q.front().length() <= n)
		{
			q.push(q.front() + "6");
			q.push(q.front() + "8");
			string str = q.front();
			if (str.length() <= n) {
				str.erase(0,1);
				ans.push_back(str);
			}
			q.pop();
		}
		
		for (int i = ans.size()-1; i > 0; i--) cout << ans[i] << " ";
		cout << endl;
	}
	return 0;
}


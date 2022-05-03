#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		
		queue<int> q;
		for (int i = 1; i <= n; i++)
		{
			int test; cin >> test;
			if (test == 1) cout << q.size() << "\n";
			else if (test == 2) {
				if (q.empty()) cout << "YES\n";
				else cout << "NO\n";
			} 
			else if (test == 3) {
				int temp; cin >> temp;
				q.push(temp);
			}
			else if (test == 4) {
				if (!q.empty()) q.pop();
			}
			else if (test == 5) {
				if (q.empty()) cout << "-1\n";
				else cout << q.front() << endl;
			}
			else if (test == 6) {
				if (q.empty()) cout << "-1\n";
				else cout << q.back() << endl;
			}
		}
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	queue<int> q;
	while(t--)
	{
		string str; cin >> str;
		if (str == "PUSH") {
			int digit; cin >> digit;
			q.push(digit);
		}
		else if (str == "PRINTFRONT") {
			if (q.empty()) cout << "NONE\n";
			else cout << q.front() << endl;
		}
		else if (str == "POP") {
			if (!q.empty()) q.pop();
		}
	}
	return 0;
}


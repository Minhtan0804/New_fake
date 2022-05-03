#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		queue<string> q;
		q.push("1");
		
		while(n--)
		{
			q.push(q.front() + "0");
			q.push(q.front() + "1");
			cout << q.front() << " ";
			q.pop();
		}
		cout << endl;
	}
	return 0;
}


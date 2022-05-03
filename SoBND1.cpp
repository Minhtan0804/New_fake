#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n; cin >> n;
		int count = 0;
		queue<long long> q;
		q.push(1);
		
		while(q.front() <= n)
		{
			q.push(q.front()*10);
			q.push(q.front()*10 + 1);
			if (q.front() <= n) count++;
			q.pop();
		}
		cout  << count << endl;
	}
	return 0;
}


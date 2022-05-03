#include<bits/stdc++.h>
using namespace std;

bool check(int i, int n)
{
	return i % n == 0;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		queue<int> q;
		q.push(9);
		
		while(true)
		{
			q.push(q.front()*10);
			q.push(q.front()*10 + 9);
			if (check(q.front(), n)) {
				cout << q.front() << endl;
				break;
			}
			q.pop();
		}
		cout << endl;
	}
	return 0;
}


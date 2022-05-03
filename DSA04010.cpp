#include<bits/stdc++.h>
using namespace std;

void qhd(int A[], int n)
{
	int s = 0, e = 0;
	for (int i = 0; i < n; i++)
	{
		e = max(A[i], e + A[i]);
		s = max (s, e);
	}
	cout << s;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int *A = new int[n];
		for (int i = 0; i < n; i++) cin >> A[i];
		
		qhd(A, n);

		cout << endl;
	}
	return 0;
}


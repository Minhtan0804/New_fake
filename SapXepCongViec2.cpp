#include<bits/stdc++.h>
using namespace std;

struct job{
	int id, deadline, profit;
};

bool cmp(job a, job b)
{
	return a.profit > b.profit;
}

void congViec(job A[], int n)
{
	sort(A, A+n, cmp);
	int count = 0, res = 0;;
	bool have[1005] = {false};
	for (int i = 0; i < n; i++)
	{
		while(A[i].deadline > 0 && have[A[i].deadline]) A[i].deadline--;
		if (A[i].deadline > 0 && !have[A[i].deadline]){
			count++;
			res += A[i].profit;
			have[A[i].deadline] = true;
		}
	}

	cout << count << " " << res;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		job A[n];

		for (int i = 0; i < n; i++) cin >> A[i].id >> A[i].deadline >> A[i].profit;

		congViec(A, n);

		cout << endl;
	}
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		int *arr = new int[n];
		for (int i = 0; i < n; i++) cin >> arr[i];
		
		int count = 0;
		
		for (int i = 0; i < n-1; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				if (abs(arr[j] - arr[i]) < k) count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}


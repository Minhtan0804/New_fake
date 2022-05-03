#include<bits/stdc++.h>
using namespace std;
int arr[1005], F[1005], n, k, mod = 1e9+7;

void sumArrK()
{
	memset(F, 0, sizeof(F));
	F[0] = 1;

	for ( int i = 1; i <= k; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[j] <= i) F[i] = (F[i] + F[i-arr[j]]) %mod;
		} 
	}
	cout << F[k];
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> k;
		for (int i = 1; i <= n; i++) cin >> arr[i];
		sumArrK();
		cout << endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;
int arr[505][505], F[505][505], n, m;

void biggestSquare()
{
	memset(F, 0, sizeof(F));
	int ans = 0;
	for (int i = 0; i < m; i++) F[0][i] = arr[0][i];
	for (int i = 0; i < n; i++) F[i][0] = arr[i][0];

	for ( int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (arr[i][j] == 1) F[i][j] = min(F[i-1][j], min(F[i][j-1], F[i-1][j-1]))+1;
			else F[i][j] = 0;
			ans = max(ans, F[i][j]);
		} 
	}
	cout << ans;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= m; j++)
				cin >> arr[i][j];
		biggestSquare();
		cout << endl;
	}
	return 0;
}


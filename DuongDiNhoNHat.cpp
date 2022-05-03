#include<bits/stdc++.h>
using namespace std;
int arr[505][505], F[505][505], n, m;

void minRoad()
{
	memset(F, 0, sizeof(F));
	for (int i = 1; i <= m; i++) F[1][i] = F[1][i-1] + arr[1][i];
	for (int i = 1; i <= n; i++) F[i][1] = F[i-1][1] + arr[i][1];

	for ( int i = 2; i <= n; i++)
	{
		for (int j = 2; j <= m; j++)
		{
			F[i][j] = min(F[i-1][j], min(F[i][j-1], F[i-1][j-1])) + arr[i][j];
		} 
	}
	cout << F[n][m];
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
		minRoad();
		cout << endl;
	}
	return 0;
}


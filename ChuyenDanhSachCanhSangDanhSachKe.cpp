#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int V, E; cin >> V >> E;
		int adjMat[905][905] = {0};
		int x, y;
		while(E--)
		{
			cin >> x >> y;
			adjMat[x][y] = 1;
			adjMat[y][x] = 1;
		}
		
		for (int i = 1; i <= V; i++)
		{
			cout << i << ":";
			for (int j = 1; j <= V; j++)
			{
				if (adjMat[i][j]) cout << " " << j;
			}
			cout << endl;
		}
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

bool visited[1005];
vector<int> add[1005];

void DFS(int u)
{
	cout << u << " ";
	visited[u] = true;
	for (int x : add[u])
	{
		if (!visited[x]) DFS(x);
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(visited, false, sizeof(visited));
		int V, E, u; cin >> V >> E >> u;
		
		for (int i = 1; i <= V; i++) add[i].clear();
		int x, y;
		for (int i = 0; i < E; i++)
		{
			cin >> x >> y;
			add[x].push_back(y);
			add[y].push_back(x);
		}
		
		DFS(u);

		cout << endl;
	}
	return 0;
}


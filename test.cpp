#include<bits/stdc++.h>
using namespace std;

bool visited[1005];
vector<int> adj[1005];

void BFS(int u)
{
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty())
	{
		int v = q.front(); q.pop();
		cout << v << " ";
		visited[v] = true;
		for (int x : adj[v])
		{
			if (!visited[x]) {
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		memset(visited, false, sizeof(visited));
		int V, E, u; cin >> V >> E >> u;
		
		for (int i = 1; i <= V; i++) adj[i].clear();
		int x, y;
		for (int i = 1; i <= E; i++)
		{
			cin >> x >> y;
			adj[x].push_back(y);
//			adj[y].push_back(x);
		}
		
		BFS(u);

		cout << endl;
	}
	return 0;
}


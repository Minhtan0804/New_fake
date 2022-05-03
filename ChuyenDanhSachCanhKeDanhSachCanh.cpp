#include<bits/stdc++.h>
using namespace std;

int main()
{
//	int t; cin >> t;
//	while(t--)
	{
		int n; cin >> n;
		int adjMat[n+5][n+5] = {0};
		for (int i = 1; i <= n; i++)
		{
			string str; getline(cin >> ws, str);
			
			stringstream ss(str);
			while(ss >> str)
			{
				adjMat[i][stoi(str)] = 1;
				adjMat[stoi(str)][i] = 1;
			}
		}
		
		for (int i = 1; i <= n; i++)
		{
			for (int j = i; j <= n; j++)
			{
				if (adjMat[i][j]) cout << i << " " << j << "\n";
			}
		}


		cout << endl;
	}
	return 0;
}


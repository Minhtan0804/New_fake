#include<bits/stdc++.h>
using namespace std;
int F[1000][1000];

void longestSubstring(string str)
{
	int count = 1, n = str.length();
	memset(F, 0, sizeof(F));
	
	for (int i = 0; i < n; i++) F[i][i] = 1;
	for (int k = 1; k < n; k++)
	{
		for (int i = 0; i < n-k; i++)
		{
			int j = i+k;
			if (str[i] == str[j] && k > 1) F[i][j] = F[i+1][j-1];
			else if (str[i] == str [j] && k == 1) F[i][j] = 1;
			else F[i][j] = 0;
			if (F[i][j]) count = max (count, j-i+1);
		}
	}
	cout << count;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str; cin >> str;
		longestSubstring(str);
		cout << endl;
	}
	return 0;
}


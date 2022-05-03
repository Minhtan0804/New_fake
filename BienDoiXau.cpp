#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		string str1, str2; cin >> str1 >> str2;
		int len1 = str1.length(), len2 = str2.length();
		
		int F[len1+2][len2+2];
		for (int i = 0; i <= len1; i++)
		{
			for (int j = 0; j <= len2; j++)
			{
				if (i == 0 || j == 0) F[i][j] = i+j;
				else if (str1[i-1] == str2 [j-1])
					F[i][j] = F[i-1][j-1];
				else F[i][j] = min(F[i-1][j-1], min(F[i][j-1], F[i-1][j])) + 1;
			}
		}
		cout << F[len1][len2] << endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long F[55] = {0};
	F[0] = 1; F[1] = 1; F[2] = 2;
	for (int i = 3; i <= 50; i++) 
	{
		F[i] = F[i-1] + F[i-2] + F[i-3];
		cout << F[i] << " \n";
	}
	
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << F[n] << endl;
	}
	return 0;
}


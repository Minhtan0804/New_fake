#include<bits/stdc++.h>
using namespace std;

void sameChar(int n, int ins, int cpy, int del)
{
	int F[105] = {0};
	F[1] = ins;

	for (int i = 2; i <= n; i++)
	{
		if (i % 2 ==0) F[i] = min(F[i-1] + ins, F[i/2] + del);
		else F[i] = min(F[i-1] + ins, F[(i+1)/2] + del + cpy);
	} 
	cout << F[n];
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, ins, cpy, del;
		cin >> n >> ins >> cpy >> del;
		sameChar(n, ins, cpy, del);
		cout << endl;
	}
	return 0;
}


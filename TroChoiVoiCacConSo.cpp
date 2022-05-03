#include<bits/stdc++.h>
using namespace std;
int n, A[20], B[20];

bool check()
{
	for (int i = 1; i < n; i++)
	{
		if(abs(A[i] - A[i+1]) == 1) return false;
	}
	return true;
}

void xuat()
{
	for (int i = 1; i <= n; i++) cout << A[i];
	cout << endl;
}

void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (!B[j])
		{
			A[i] = j;
			B[j] = 1;
			if (i == n){
				if(check()) xuat();
			}else Try(i+1);
			B[j]= 0;
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		
		for (int i = 0; i <= n; i++) A[i] = i;
		Try(1);
		if(n < 4) cout << endl;
	}
}


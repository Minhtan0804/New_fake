#include<bits/stdc++.h>
using namespace std;
int k;
char A[15], c;

void xuat()
{
	for (int i = 1; i <= k; i++) cout << A[i];
	cout << endl;
}

void Try(int i)
{
	for (int j = A[i-1]; j <= c; j++){
		A[i] = j;
		if(i == k) xuat();
		else Try(i+1);
	}
}

int main()
{
//	int t; cin >> t;
//	while(t--)
//	{
		memset(A, 'A', sizeof(A));
		cin >> c >> k;
		Try(1);
//	}
}


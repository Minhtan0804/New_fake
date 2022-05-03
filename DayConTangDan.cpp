#include<bits/stdc++.h>
using namespace std;
int n, k, A[25], B[25];
string str, C[100000];

bool checkArr()
{
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		if (B[i]) count++; 
	}
	if (count < 2) return false;
	
	for (int i = 1; i < n; i++)
	{
		for (int j = i+1; j <= n; j++)
		{
			if (B[i] && B[j] && A[i] > A[j])
			{
				return false;
			}
		}
	}
	return true;
}

void makeString()
{
	str.clear();
	for (int i = 1; i <= n; i++)
	{
		if (B[i]) str += to_string(A[i]) + " ";
	}
	C[k++] = str;
}

void Try(int i)
{
	for (int j = 0; j <= 1; j++)
	{
		B[i] = j;
		if(i == n)
		{
			if(checkArr()) makeString();
		}else Try(i+1);
	}
}

int main()
{
	cin >> n;
	k = 0;
	for (int i = 1; i <= n; i++) cin >> A[i];
	Try(1);
	sort(C, C+k);
	for (int i = 0; i < k; i++) cout << C[i] << endl;
}


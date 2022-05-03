#include<bits/stdc++.h>
using namespace std;
int n, A[10];
bool B[10] = {false};

void xuat()
{
	for (int i = 1; i <= n; i++) cout << (char)(A[i]+64);
	cout << endl;
}

bool check()
{
	for (int i = 2; i < n; i++)
	{
		if(A[i] == 1 && A[i-1] != 5 && A[i+1] != 5) return false;
		if(A[i] == 5 && A[i-1] != 1 && A[i+1] != 1) return false;
	}
	return true;
}

void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if(!B[j]){
			A[i] = j;
			B[j] = true;
			if(i == n){
				if(check()) xuat();
			}else Try(i+1);
			B[j] = false;
		}
	}
}


int main()
{
	char x; cin >> x;
	n = (int)x - 64;
	Try(1);
}


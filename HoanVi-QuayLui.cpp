#include<bits/stdc++.h>
using namespace std;
int A[15], B[15], n;

void in()
{
	for (int i = 1; i <= n; i++) cout << A[i] << " ";
	cout << endl;
}

void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if(!B[j]){
			A[i] = j;
			B[j] = 1;
			if (i == n) in();
			else Try(i+1);
			B[j] = 0;
		}
		
	}
}

int main()
{
	cin >> n;
	Try(1);
}


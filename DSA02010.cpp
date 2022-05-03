#include<bits/stdc++.h>
using namespace std;
int n, X, A[25], C[250]; 
bool stop = false;

void xuat(int k)
{
	stop = true;
	cout << "[";
	for (int i = 1; i < k; i++) cout << C[i] << " ";
	cout  << C[k] << "]";
}

void Try(int i, int sum)
{
	int j;
	for (j = 1; j <= n; j++)
	{
		if(A[j] >= C[i-1] && sum + A[j] <= X){
			C[i] = A[j]; sum += A[j];
			if (sum == X) xuat(i);
			else if(sum > X) return;
			else Try(i+1, sum);
			sum -= A[j];
		}
	}
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> X;
		for (int i = 1; i <= n; i++) cin >> A[i];

		memset(C, 0, sizeof(C));
		stop = false;
		Try(1, 0);
		if(!stop) cout << -1;
		cout << endl;
	}
}


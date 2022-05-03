#include<bits/stdc++.h>
using namespace std;

// Tra ve so dao nghich cua mang
int getInvCount(int arr[],int n)
{
	// Tao mot set rong va chen phan tu dau tien vao set
	multiset<int> set1;
	set1.insert(arr[0]);

	int invcount = 0; // Khoi tao dem nghich dao

	multiset<int>::iterator itset1; // Khoi tao set

	for (int i=1; i<n; i++)
	{
		set1.insert(arr[i]);

		itset1 = set1.upper_bound(arr[i]);

		invcount += distance(itset1, set1.end());
	}

	return invcount;
}

int main()
{
	int n; cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	cout << getInvCount(arr,n);
	return 0;
}


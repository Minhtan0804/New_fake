#include<bits/stdc++.h>
using namespace std;
void smallest(long long n)
{
	if (n >= 0 && n <= 9)
	{
		cout << n;
		return;
	}
	vector<int> digits;
	for (int i = 9; i >= 2 && n > 1; i--)
	{
		while(n % i == 0)
		{
			digits.push_back(i);
			n /= i;
		}
	}
	if (n != 1 || digits.empty())
	{
		cout << -1;
		return;
	}
	
	for (int i = digits.size()-1; i >= 0; i--) cout << digits[i];
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		long long n; cin >> n;
		smallest(n);
		cout << endl;
	}
	return 0;
}


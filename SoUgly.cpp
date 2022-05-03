#include<bits/stdc++.h>
using namespace std;

long long F[100000] = {0};

void uglyNumber()
{
	long long ugly_2 = 2, ugly_3 = 3, ugly_5 = 5;
	int i_2 = 0, i_3 = 0, i_5 = 0;
	
	long long next_ugly = 1;
	F[0] = 1;
	for (int i = 1; i <= 1e4; i++)
	{
		next_ugly = min(ugly_2, min(ugly_3, ugly_5));
		F[i] = next_ugly;
//		cout << next_ugly << " \n";
		if (next_ugly == ugly_2){
			i_2++;
			ugly_2 = F[i_2]*2;
		}
		if (next_ugly == ugly_3){
			i_3++;
			ugly_3 = F[i_3]*3;
		}
		if (next_ugly == ugly_5){
			i_5++;
			ugly_5 = F[i_5]*5;
		}
	}
}

int main()
{
	uglyNumber();
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		cout << F[n-1] << endl;
	}
	return 0;
}


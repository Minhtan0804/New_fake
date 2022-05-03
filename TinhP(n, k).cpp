#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;

int main(){
	int t; cin >> t;
	while(t--){
		int n, k; cin >> n >> k;
		long long P = 1;
		if (k > n) cout<< 0;
		else{
			for (int i = n-k+1; i <= n; i++){
				P *= i;
				P %= mod;
			}
		}
		cout << P << endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int TongBinhPhuong(int n){
	if (n <= 3) return n;
	int k = sqrt(n);
	if (k*k == n) return 1;
	
	int A[n+1];
	for (int i = 0; i <= n; i++){
		// Gia su A[i] la tong cua
		// 1*1+1*1+1*1+1*1+........
		A[i] = i;
		
		// Gia su i la tong cua 1 binh phuong 
		// va 1 so k khac
		for (int j = 0; j*j <= i; j++){
			
			//Tim so binh phuong nho nhat
			// cho j va i-j*j
			A[i] = min(A[i], A[i-j*j] + 1);
		}
	}
	
	return A[n];
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		
		cout << TongBinhPhuong(n);
		cout << endl;
	}
	return 0;
}


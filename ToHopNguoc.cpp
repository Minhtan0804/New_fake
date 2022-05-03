#include<bits/stdc++.h>
using namespace std;
bool Ok = false;
int n, k, A[105] = {0};
vector<vector<int>> th;

void Xuat()
{
    vector<int> B;
    for (int i = 1; i <= k; i++) B.push_back(A[i]);
    th.push_back(B);
}

void sinhToHop()
{
    int i = k;
    while(A[i] == n-k+i) i--;
    if(i == 0) Ok = true;
    else
    {
        A[i]++;
        for(int j = i+1; j <= k; j++) A[j] = A[j-1]+1;
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= n; i++) A[i] = i;
        while(!Ok)
        {
            Xuat();
            sinhToHop();
        }
        Ok = false;
        
        for (int i = th.size()-1; i>= 0; i--)
        {
        	for (int j = 0; j <th[i].size(); j++) cout << th[i][j] << " ";
        	cout << endl;
		}
        cout << endl;
    }
    return 0;
}

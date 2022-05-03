#include<bits/stdc++.h>
using namespace std;
int A[15], B[15], C[15], n;
vector<string> ma;
vector<string> so;

void in()
{
	string str2 = "";
	for (int i = 1; i <= n; i++) str2 += (A[i]+'A'-1);	
	ma.push_back(str2);
}

void in2()
{
	string str1 = "";
	for (int i = 1; i <= n; i++) str1 += (C[i]+'0');
	so.push_back(str1);
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

void Try2(int i)
{
	for (int j = 1; j <= n; j++)
	{
		C[i] = j;
		if (i == n) in2();
		else Try2(i+1);
	}
}

int main()
{
	cin >> n;
	Try(1); 
	Try2(1);

	for (int i = 0; i < ma.size(); i++)
	{
		for (int j = 0; j < so.size(); j++) cout << ma[i] << so[j]<< "\n";
	}
}


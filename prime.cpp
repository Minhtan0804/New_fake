#include<bits/stdc++.h>
using namespace std;
bool prime[500];

void Prime()
{
	prime[1] = false;
	prime[0] = false;
	for (int k = 2; k < 500; k++) prime[k] = true;
	
	for (int i = 2; i < 500; i++)
	{
		if(prime[i] == true){
			for (int j = i*i; j < 500; j+=i) prime[j] = false;
		}
	}
}

int main()
{
	Prime();
	for (int i = 0; i < 500; i++)
	{
		if(prime[i]) cout << i << " ";
	}
}


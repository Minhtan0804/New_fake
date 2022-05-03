#include<bits/stdc++.h>
using namespace std;

long long example(long long n)
{
    double res = 1;
    for (int j = 2; j <= n; j++)
    {
        res *= (n+j);
        res /= j;
    }
    return res;
}

int main()
{
    long long cata[105];
    for (long long i = 0; i <= 100; i++)
    {
    	cata[i] = 0;
        cata[i] = example(i);
        cout << i << " " << cata[i] << "\n";
    }
}

// tran so. chạy đến 35



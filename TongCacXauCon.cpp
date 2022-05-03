#include<bits/stdc++.h>
using namespace std;

/*
n = 6759
sum = 6 + 7 + 5 + 9 + 67 + 75 + 
      59 + 675 + 759 + 6759
      = 8421


    1   10  100 1000
6   1   1   1   1
7   2   2   2
5   3   3
9   4

sum = 6*(1*1 + 1*10 + 1*100 + 1*1000) + 7*(2*1 + 2*10 + 2*100) 
    + 5*(3*1 + 3*10) + 9*(4*1)
    = 6*1*(1111) + 7*2*(111) + 5*3*(11) + 9*4*(1)
    = 6666 + 1554 + 165 + 36
    = 8421
*/

int main()
{
    int t; cin >> t;
    while(t--)
    {
        string n; cin >> n;
        long long k = 1, sum = 0;
        for (int i = n.length()-1; i >= 0; i--)
        {
            sum += (n[i]-'0')*(i+1)*k;
            k = k*10+1;
        }
        cout << sum << endl;
    }
    return 0;
}

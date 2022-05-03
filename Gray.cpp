#include <iostream>
#include <string>
#include<cmath>
using namespace std;

void print(int num_of_digit, unsigned num)
{
    cout<<num<<endl; //this is for test.
    // Remove the above line and
    //write a code to print num into binary with num_of_digit

}

unsigned short binaryToGray(unsigned short num)
{
        return (num>>1) ^ num;
}

int main ()
{
    int n;
    unsigned num;
    cin >> n;
    //bitString(n,"");
    for(unsigned i=0;i< pow(2,n);i++)
    {
        num = binaryToGray(i);
        print(n,num);
    }

    //system ("pause");
    return 0;
}

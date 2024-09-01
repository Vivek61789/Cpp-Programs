#include<iostream>
using namespace std;

bool checkPrime(int n, int i)
{
    if (n < 2)
        return false;

    if (i == n)
        return true;

    if (n % i == 0)
        return false;

    i += 1;
    return checkPrime(n, i);
}

int main()
{
    int i = 2;
    bool isprime= true;
    
    int n = 37;
    isprime=checkPrime(n, i);
    
    string result = isprime ? "Prime":"not Prime";
    cout<< n << " is : "<< result;
    
    return 0;
}
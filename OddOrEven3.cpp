// Using Ternary Operator

#include<bits/stdc++.h>
using namespace std;

    bool isEven(int number)
{
     
    // n & 1 is 1, then odd, else even
    return (!(number & 1));
}
 
// Driver code
int main()
{
    int number;
    
    cout << "Enter the number: "; cin >> number;

    if(isEven(number))
        cout << "Even";
    else
        cout << "Odd";

 
    return 0;
}


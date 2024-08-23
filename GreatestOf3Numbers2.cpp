#include<bits/stdc++.h>
using namespace std;

int main()
{
    int first, second, third;
    
    first=10,second=20,third=3;
    
    int temp, result;

    temp = first > second ? first:second;
    
    result = temp > third ? temp:third;
    
    cout << result << " is the largest";

 
    return 0;
}
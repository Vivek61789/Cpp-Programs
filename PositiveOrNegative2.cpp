// Using Nested if-else Statements
#include <iostream>
using namespace std;

int main()
{
    int num =-9;
    
    //Conditions to check if the number is negative or positive
    if (num >= 0){
        if(num==0){
            cout<<"Zero";
        }
        else{
            cout<<"The number is positive";
        }
     }
     else{
            cout<<"The number is negative";
        }
    return 0;
}
//Output 
//The number is negative
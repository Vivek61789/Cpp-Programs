#include<iostream>
using namespace std;

//Using Classes 

class Maths
{
    public:
    int calLargest(int , int);
};
int Maths::calLargest(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    Maths n;
    int num1,num2,largest;
    num1=24,num2=20;
    
    largest= n.calLargest(num1,num2);
    cout<<largest<<" is largest";
    
    return 0;
}

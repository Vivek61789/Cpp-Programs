#include<bits/stdc++.h>
using namespace std;

int getsum( int num,int sum){
    
    if(num==0)
    return sum;
    
    sum +=num%10;
    return getsum(num/10,sum);
    
}

int main()
{
    int num=12345;
    int sum=0;
    
    cout<<"\nThe number is: "<<num;
    
    cout<<"\nThe sum of digits :"<<getsum(num,sum);
    
    return 0;
}
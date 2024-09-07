#include<bits/stdc++.h>
using namespace std;

int getsum( int num){
 
 if(num==0)
 return 0;
 return (num%10)+getsum(num/10);

}

int main()
{
    int num=12345;
    int sum=0;
    
    cout<<"\nThe number is: "<<num;
    
    cout<<"\nThe sum of digits :"<<getsum(sum);
    
    return 0;
}
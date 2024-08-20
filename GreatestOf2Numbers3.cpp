#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num1,num2;
    num1=20,num2=33;
    
    //Using inbuilt max() Function
    
    if(num1==num2){
        cout<<"Both are equal";
    }
    else{
        cout<<max(num1,num2)<<" is largest";
    }
    return 0;
}
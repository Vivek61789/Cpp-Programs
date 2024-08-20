#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num1,num2,largest;
    num1=33;
    num2=40;
    
    //Using Ternary Operator
    
    if(num1==num2)
    cout<<"Both are equal\n";else{largest=num1>num2?num1:num2;
    cout<<largest<<" is largest";
    }
    
    return 0;
}
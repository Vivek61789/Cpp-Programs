#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num,reverse=0,rem;
    num=12345;
    cout<<"The number is :"<<num;
    
    while(num!=0){
        rem=num%10;
        reverse=reverse*10+rem;
        num /= 10;
        
    };
    
    cout<<" \n Reversed number :"<<reverse;
    return 0;
}
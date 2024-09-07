#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int num,reverse=0,rem,temp;
    num=123321;
    cout<<" The number is :"<<num;
    
    temp=num;
    
    while(temp!=0){
        
        rem = temp%10;
        reverse=reverse*10+rem;
        temp=temp/10;
    };
    
    if(num == reverse)
    cout<<" is palindrome";
    else 
    cout<<" is not palindrome";
    
    return 0;
    
}
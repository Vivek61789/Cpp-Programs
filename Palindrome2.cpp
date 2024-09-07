#include<bits/stdc++.h>
using namespace std;

int getReverse(int num,int rev){
    
    if(num==0)
    return rev;
    
    int rem = num%10;
    rev = rev*10+rem;
    getReverse(num/10,rev);
}
int main(){
    
    int num , reverse = 0;
    num=123454321;
    cout<<" The number is : "<<num;
    
    if(getReverse(num,reverse)==num)
    cout<<"is palindrome.";
    else
    cout<<" is not palindrome.";
    
    return 0;
}
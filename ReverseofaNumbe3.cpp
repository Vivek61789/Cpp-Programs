#include<bits/stdc++.h>
using namespace std;
int getreverse(int num){
    if(num==0)
    return 0;
    int rem =num%10;
    cout<<rem;
    
    getreverse(num/10);
}
int main(){
    
    int num,rev=0;
    num=4321;
    cout<<" The number:"<<num;
    cout<<" \n Reverse: "<<getreverse(num);
    
    return 0;
}
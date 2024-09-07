#include<bits/stdc++.h>
using namespace std;
int getreverse(int num,int rev){
    
    if(num==0)
    return rev;
    
    int rem=num%10;
    rev=rev*10+rem;
    return getreverse(num/10,rev);
}
int main()
{
    int num,rev=0;
    num=54321;
    
    cout<<" The number:"<<num;
    cout<<"\n Reverse :"<<getreverse(num,rev);
    
    return 0;
}
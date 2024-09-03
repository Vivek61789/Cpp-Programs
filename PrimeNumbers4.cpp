#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    
    if(n<2)
    return false;
    
    if(n==2)
    return true;
    
    if(n%2==0)
    return false;
    
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0)
        return false;
    }
    return true;
}
int main(){
    
    int lower,upper;
    lower=1,upper=100;
    
    for(int i=lower;i<=upper;i++)
    if(isprime(i))
    cout<<i<<" ";
}
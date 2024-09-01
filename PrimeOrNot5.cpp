#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    
    if(n<=1)
    return false;
    else if(n == 2)
    return true;
    else if(n%2==0)
    return false;
 for(int i=3;i<=sqrt(n);i+=2){
     if(n%i==0)
     return false; 
 }
 return true;
}


int main() {
    
    int n = 29;
    
    if(isprime(n))
    cout<<n<<" is a prime";
    else
    cout<<n<<" is not a prime";
    
    return 0;
}
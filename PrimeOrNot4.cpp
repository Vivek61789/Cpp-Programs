#include<bits/stdc++.h>
using namespace std;

int main(){
    
    bool isprime= true;
    int i,n=29;
    
    if(n<2)
    isprime = false;
    else{
        for(i=2;i<sqrt(n);i++)
        {
            if(n%i==0){
                isprime = false;
                break;
            }
        }
    }
    
    string result=isprime?"prime":"is not prime";
    cout<<"The number "<<n<<" is: "<<result;
    
    return 0;
    
}
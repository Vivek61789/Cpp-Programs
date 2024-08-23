#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int first,second,third;
    first=1, second=3, third=2;
    
    int result;
    
    result = max(first,max(second,third));
    
    cout<<result<<" is the greatest ";
    
    return 0;
}
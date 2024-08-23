#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int first,second,third;
    
    first=9,second=22,third=6;
    
    if((first>=second) && (first>=third)){
        cout<<first<<" isthe greatest ";
    }
    else if((second>=first)&&(second>=third)){
        cout<<second<<" is the greatest";
    }
    else{
        cout<<third<<" is the greatest";
    }
    return 0;
}
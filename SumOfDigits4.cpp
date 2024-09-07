#include<bits/stdc++.h>
using namespace std;

int getsum(string num){
    
    int sum = 0;
    
    for(int i=0;i<num.length();i++){
        
        sum = sum+num[i]-48;
    }
    return sum;
}
 int main(){
     
     string num="234854793937483974937938";
     
     cout<<" sum :"<<getsum(num);
     return 0;
 }
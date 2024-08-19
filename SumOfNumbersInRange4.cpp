#include<bits/stdc++.h>
using namespace std;
    
int calSum(int a,int b){
    
    if(b<a)
    return 0;
    return b+ calSum(a,b-1);
}
int main()
{
    int a = 10;
    int b = 23;
    int sum = calSum(a,b);
    cout<<sum;
    
    return 0;
}
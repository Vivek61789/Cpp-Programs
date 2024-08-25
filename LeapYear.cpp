#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int year;
     year = 2000;
     
     if(year % 400 == 0)
     cout<<year<<" is a leap year";
     
     else if( year % 4 == 0 && year % 100 != 0)
     cout<<year<<" is a prime number";
     
     else
     cout<<year<<" is not a prime number";
     
     return 0;
} 
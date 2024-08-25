#include<bits/stdc++.h>
using namespace std;
 int main(){
     
     int year;
     year = 2000;
     
     int flag = (year % 400 == 0)||(year % 4 == 0 && year % 100 !=0)?1:0;
     if(flag == 1)
     cout<<year<<" is a leap year";
     else
     cout<<year<<" is not a leap year";
     
     return 0;
 }
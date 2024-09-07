#include<bits/stdc++.h>
using namespace std;

int main(){
    char string[10]="Vicky";
    int i,len;
    bool flag = false;
    len = strlen(string);
    
    for(i=0;i<len;i++){
        if(string[i]!=string[len-i-1])
        flag=true;
        break;
    }
    if(flag)
    cout<<string<<" is palindrome.";
    else
    cout<<string<<" is not palindrome.";
    
    return 0;
}
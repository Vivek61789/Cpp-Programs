#include<bits/stdc++.h>
using namespace std;

void Lower_case(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] > 64 && str[i] < 91) str[i] += 32;
        i++;
    }
}

void CheckPalindrome(char string[]) 
{
    int left = 0;
    int right = strlen(string) - 1;
    
    while (right > left) 
    {
        if (string[left++] != string[right--]) {
            cout << string << " is not palindrome";
            return;
        }
    }
        cout << string << " is palindrome";
}
int main() 
{
    char str1[50] = "Radar";
    
    Lower_case(str1);
    CheckPalindrome(str1);
    
    return 0;
}
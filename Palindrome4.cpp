#include<bits/stdc++.h>
using namespace std;

void lowerCase(char str[]){
  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] > 64 && str[i] < 91) 
      str[i] += 32; 
    i++;
  }
}
int main() 
{
    char string[10] = "Radar";
    int i, len, flag = 0;
    
    lowerCase(string);
    
    len = strlen(string);
        for (i = 0; i < len / 2; i++) 
    {
        if (string[i] != string[len - i - 1]){
            flag++;
            break;
        }
    }

    if (flag)
        cout << string << " is not palindrome";
    else
        cout << string << " is palindrome";
        
    return 0;
}
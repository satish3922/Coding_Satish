/*
  WAP in C to check String is Palindrom or not ?
*/

#include <stdio.h>
#include <string.h>

void isPalindrome(char str[]);

int main(int argc, char *argv[]) {
  int n = argc;
  isPalindrome(argv[1]);
  return 0;
}

void isPalindrome(char str[]){
  int s = 0;
  int l = strlen(str)-1;
  while(l>s){
    if(str[s++] != str[l--]){
      printf("%s is Not Palindrome\n",str );
      return;
    }
  }
  printf("%s is Palindrome\n",str );
}

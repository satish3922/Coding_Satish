#include<stdio.h>
int main()
{
  char str[] = "satISH", ch;
  int index = 0;
  ch = str[index];
  while(ch != '\0'){
    if(ch == tolower(ch)){
      printf("%c",toupper(ch));
    }
    else{
      printf("%c",tolower(ch));
    }
    ch = str[++index];
  }
  printf("\n");
  return 0;
}

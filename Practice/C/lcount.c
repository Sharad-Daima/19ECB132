#include<stdio.h>
#include<string.h>

int main(void){
  char sen[10];
  int a, b=0, c;
  scanf("%s", sen);
  c = strlen(sen);

  for(a=0; a<c; a++){
     if(sen[a]!=' '){
        b++;
     }
  }
  printf("%d", b);
}  
/*
Input:
Hello
Output:
5 [Returns the number of letters in the word]
*/

#include<stdio.h>
#include<string.h>

int main(void){
  char sen[];
  int a, b=0, c;
  
  c = strlen(sen);
  
  for(a=0; a<c; a++){
     if(sen[a]!==' '){
        b++
     }
  }
  printf("%d", &b);
}  

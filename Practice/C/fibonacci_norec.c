#include<stdio.h>

int main(){
  int a=0,b=1,c,x,y;
  printf("Enter the range: "); scanf("%d", &y);
  printf("%d\t%d", a, b);
  for(x=0; x<y-2; x++){
    c = a+b;
    printf("\t%d", c);
    a = b;
    b = c;
  }
}

/*
Input: 
4
Output:
0 1 1 2
*/

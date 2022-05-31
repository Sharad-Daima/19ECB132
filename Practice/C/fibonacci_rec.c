#include<stdio.h>

int fibonacci(int n){
  static int x=0, y=1, z;
  if(n>0){
    z = x+y;
    printf("%d ", z);
    x = y;
    y = z;
    fibonacci(n-1);
  }
}

int main(){
  int a;
  printf("Enter the range: "); scanf("%d", &a);
  printf("Fibonacci sequence: \n");
  printf("0 1 ");
  fibonacci(a-2);
}

/*
Inupt:
4
Output:
0 1 1 2
*/

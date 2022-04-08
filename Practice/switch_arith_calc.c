#include<stdio.h>

void main(){
    char b;
    int a1, a2, c;
    scanf("%d %d %c", &a1, &a2, &b);
    
    if (b=='+'){
        c = 1;
    }
    else if (b=='-'){
        c = 2;
    }
    else if (b=='*'){
        c = 3;
    }
    else if (b=='/'){
        c = 4;
    }
    else if (b=='%'){
        c = 5;
    }

    switch (c) {
      case 1:
        printf("%d", a1+a2);
        break;
      case 2:
        printf("%d", a1-a2);
        break;
      case 3:
        printf("%d", a1*a2);
        break;
      case 4:
        printf("%d", a1/a2);
        break;
      case 5:
        printf("%d", a1%a2);
        break;
      default:
        printf("Invalid Operator");
    }
}

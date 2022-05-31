#include<stdio.h>

int main(){
    int a, b=1, c;
    printf("Enter an integer: "); scanf("%d",&a);
    
    if(a==0){
        printf("1");
    }
    
    else if (a>=10){
        printf("\nToo big a number");
    }
    
    else if (a>0 && a<10){
        for (c=1; c<=a; c++)
        {
            b*=c;
        }
        printf("\n%d",b);
    }
    
    else if(a<0){
        printf("\nNegative Number");
    }
}
/*
Input: 
4
Output:
24 
*/

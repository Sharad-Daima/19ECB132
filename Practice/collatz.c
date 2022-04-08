#include<stdio.h>

int main(){
    int a,b=0;
    scanf("%d",&a);
    
    while(a!=1){

        if(a&1){
            a=3*a+1;
        }
        
        else{
            a=a/2;
        }
        ++b;
    }
    
    printf("%d", b+1);
}

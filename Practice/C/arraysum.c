#include<stdio.h>
#include<stdlib.h>

int arrsum(int a[], int n){
    int sum=0;
    for (int i=0; i<n; i++){
        sum+= a[i];
    }
    return sum;
}

int main(){
    int *a, n, x;
    scanf("%d", &n);
    a= malloc(sizeof(int)*n);
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    x=arrsum(a, n);
    /*for(int i=0; i<n; i++){
        x+= a[i];
    }*/
    printf("%d", x);
}

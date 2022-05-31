#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i=0,j=1,t,p=0,q=0,x; 
    scanf("%d",&n);
    int *standard = malloc(sizeof(int) * n);
    for(x = 0; x < n; x++){
       scanf("%d",&standard[x]);
    }
    while (j <= 5 ){
        t = 0;
        i = 0;
        while (i < n){
            if (standard[i] == j)
                t++;
            i++;
        }
        if (t > p){
            q = j;
            p = t;
        }
        j++;
    }
    printf("%d", q);
    return 0;
}
/*
Input:
3 [Size of the array]
0 1 2 [Elements of the array]

Output:
1 [Minimum non-zero, non-negative number]
*/

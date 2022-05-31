#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,s,l=0,t=0; 
    
    scanf("%d",&n);
    int *arr = malloc(sizeof(int) * n);
    
    for(s = 0; s < n; s++){
       scanf("%d",&arr[s]);
    }
    
    for (s=0;s<n;s++){
        if(arr[s] > l){
            l=arr[s];
        }
    }
    
    for (s=0;s<n;s++){
        if(l == arr[s])
        t++;
    }
    
    printf("%d",t);
}

/*
Input:
5 [Size of the array/ Number of candles]
3 3 5 1 4 [Elements of the array/ Value for height of the candles]

Output:
1 [Returns number of repetitions of the highest element value, i.e., 5 appears once and is the largest value]
*/

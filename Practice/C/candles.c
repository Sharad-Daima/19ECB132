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

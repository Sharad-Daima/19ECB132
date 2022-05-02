#include<stdio.h>
#include<stdlib.h>

int main(){
  int d[100][100], l=0, k=0, z=0, n;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      scanf("%d", &d[i][j]);
    }
  }
  for(int i=0; i<n; i++){
    l += d[i][i];
  }
  for(int i=0; i<n; i++){
    k += d[i][n-1-i];
  }
  z = l - k;
  printf("%d", abs(z));
}

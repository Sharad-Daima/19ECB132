#include<stdio.h>
#include<stdlib.h>
int main(){
  int n, k, x = 0, tick = 0, q, p;
  scanf("%d %d", &n, &k);
  int *a = malloc(sizeof(int)*n);
  for(x = 0; x < n; x++){
      scanf ("%d", &a[x]);
    }
  for (q=0; q<n; q++){
      for (p=q+1; p<n;p++){
	  if ((a[q] + a[p]) % k == 0)
	    tick++;
	  }
    }
  printf("%d\n", tick);
  return 0;
}

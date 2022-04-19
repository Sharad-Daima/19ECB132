//Adding, deleting, modifying an element in an array (Identify the worst and best case time complexities in each case).

#include<stdio.h>
#include<stdlib.h>

struct node{
  int num;
  struct node *nxt;
}*nodex;

void singlylist(int n){
  struct node *a, *temp;
  int num, i;
  nodex = (struct node *)malloc(sizeof(struct node));
  
  if(nodex == NULL){
    printf("List cannot be formed.");
  }
  else{
    printf("Enter data for node 1: "); scanf("%d", &num);
    nodex->num = num;      
    nodex->nxt = NULL; 
    temp = nodex;
    
    for (i=2; i<=n; i++){
      a = (struct node *)malloc(sizeof(struct node));
      
      if (a == NULL){
        printf("List cannot be formed.");
      }
      
      else{
        printf("Enter data for node %d: ", i); scanf("%d", &num);
        
        a->num = num;
        a->nxt = NULL;
        temp = nodex;
        
        temp->nxt = a;
        temp = temp->nxt;
      }
    }
  }
}

int main(){
  int n;
  printf("Enter the number of nodes you want: "); scanf("%d", &n);
  singlylist(n);
}

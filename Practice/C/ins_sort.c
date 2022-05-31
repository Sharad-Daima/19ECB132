#include<stdio.h>

int main(){
	int a, b, c = 0, array[5] = {5,3,4,2,1}; //hard coded
	
	for (a=0; a<5; a++){
		for (b=a+1; b<5; b++){
			if(array[a]> array[b]){
				c = array[a];
				array[a] = array[b];
				array[b] = c;
			}
		}
	}
	printf("\nSorted array is: \n");
	for (a=0; a<5; a++){
		printf("\t%d", array[a]);
	}
}
/*
Input(hard coded):
5 3 4 2 1
Output:
1 2 3 4 5 (ascending order sorted array)
*/

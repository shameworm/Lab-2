#include "ex0.h"
void fill(int *p, int size){
	int i;
	for (i = 0; i<size; i++){
    	p[i]= rand() % 10;
	}
}

void print(int *p, int size){
	int i;
	for (i = 0; i<size; i++)
    	printf("%d ", p[i]);
    	
}

int remove0(int *p,  int size, int f){ 
    if(p == NULL){ 
 printf("Error with memory! "); exit(1); } 
  int i; 
  int newarr = p[f]; 
  for(i = f; i < size - 1; i++){ 
    p[i] = p[i + 1]; 
  } 
  size--; 
  return newarr; 
}
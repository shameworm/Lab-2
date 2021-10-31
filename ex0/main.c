#include "ex0.h"
int main(){
  int *p;  
  int i, size,min;
 int indexofmin;
  printf("enter ammount of points: ");
  scanf("%d", &size);
  p = (int*)malloc(size * sizeof(int));
  fill(p, size);
  print(p, size);
  
while (size>1){
	 min = p[0]; 
	 indexofmin = 0; 
    for (i = 1; i < size; i++){
        if (min>p[i]){ 
        	 min = p[i];
        	indexofmin= i;
        	
		}
		 
    }
     printf("\nmin is = %d\n", min)  ; 
        
    
    if (indexofmin != (size -1)){
    	p[indexofmin+1] = p[indexofmin+1] + p[indexofmin];
    	printf("point that got = %d\n",p[indexofmin+1] );
    	remove0(p, size,indexofmin);
    	size --; 
	}
	else {
		p[indexofmin-1] = p[indexofmin-1] + p[indexofmin];
    	printf("point that got = %d\n",p[indexofmin-1] );
    	remove0(p, size,indexofmin);
    	size --; 
	}
    print(p, size);
    
 
}
  	
  free(p);
  getchar();   getchar();
  return 0;
}
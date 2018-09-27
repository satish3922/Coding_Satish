/*
*****************
 ******* ******* 
  *****   *****  
   ***     ***   
    *********    
     *******     
      *****      
       ***       
        * 
*/
#include <stdio.h>

int main() {
	int i,j;
  	int n = 9;
  	int c = n*2-1;
  	for(i=1;i<=n;i++){
    		for(j=1;j<=c;j++){
      			if(i<5){
        			if((j>=i && j<=n+1-i) || (j>=n-1+i && j<=c+1-i))
          				printf("*");
        			
        			else
          				printf(" ");
        
      			}
      			else{
        			if(j>=i && j<=c+1-i)
          				printf("*");
       			 	else
          				printf(" ");
        		}
      		}
    		printf("\n");
  	}
 	return 0;
}

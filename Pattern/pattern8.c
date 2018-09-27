/*

*********
 ******* 
  *****  
   ***   
    * 

*/
 
main(){
	int i,j,k;
	int n = 5;
	int c = n*2 -1;
	k = c;
	for(i=1;i<=n;i++){
		for(j=1;j<=c;j++){
			if(j<=k && j>=i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
		k--;
	}
}

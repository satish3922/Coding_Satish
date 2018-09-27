/*
   1   
  12A  
 123AB 
1234ABC
*/

main(){
	int i,j,k;
	int n = 4;
	int c = n*2 - 1;
	for(i=1;i<=n;i++){
		k = 49;
		for(j=1;j<=c;j++){
			if(j<=3+i && j>=5-i){
				printf("%c",k);
				k++;
				if(j==n)
					k = 65;
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

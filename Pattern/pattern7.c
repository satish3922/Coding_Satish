/*

*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********

*/

main(){
	int i,j,k=0;
	int n = 5;
	int c = n*2 -1;
	for(i=1;i<=c;i++){
		i<=5 ? k++ : k--;
		for(j=1;j<=c;j++){
			if(j<=6-k || j>=4+k){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}

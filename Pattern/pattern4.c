// Print this pattern
// * * * * *
//   * * * *
//     * * *
//       * *
//         * 

main(){
	int i, j, k, n;
	n = 5; // No. of rows
	
	for( i=1; i<=n; i++ ){
		for( j=n; j>i; j-- ){
			printf(" ");
		}
		for( k=1; k<=i; k++ ){
			printf("*");
		}
	printf("\n");
	}
}

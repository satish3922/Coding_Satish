// Print this pattern
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

main(){
	int i, j, n;
	n = 5; // No. of rows
	
	for( i=1; i<=n; i++ ){
		for( j=1; j<=n; j++ ){
			printf(" *");
		}
	printf("\n");
	}
}

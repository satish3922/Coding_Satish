/*
	1
	2	6
	3	7	10
	4	8	11	13
	5	9	12	14	15
*/

#include<stdio.h>

int main( int args, char *argv[] ){
	int i,j,k,l;
	int n=atoi(argv[1]);
	for(i=1;i<=n;i++){
		if(i>1)
			l=n;
		else
			l=0;
		k=i;
		for(j=1;j<=i;j++){
			printf("%d ",k);
			--l;
			k = k+l;
		}
		printf("\n");
	}
}

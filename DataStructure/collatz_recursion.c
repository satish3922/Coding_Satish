// This is collatz recursion function 
// It calculate the number of step need to get to 1
// if n == 1:
// 	return 0;
// if n is even:
// 	return 1 + collatz(n/2)
// if n is odd:
// 	return 1 + collatz(3n + 1)
//

int main(){
	int n = 7;
	printf("%d is number of Step Needed to get to 1\n",collatz(n));
}
int collatz(int n){
	if(n == 1)
		return 0;
	else if(n%2 == 0)
		return 1 + collatz(n/2);
	else
		return 1 + collatz(3*n + 1);
}

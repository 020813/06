#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void func1(int x)
int combination (int n, int r)
{
    int n,r;
	int com = n!/(n-r)!r!;
	
	printf("func1 x is at %p\n", &x);
	return (com);
}

int factorial (int n)
 {
	int i;
	int res = 1;
	for(i=0;i<n;i**)
	return res;
}

int get_integer (int x)
 {
	printf("The answer is : ");
	scanf("%d", &x);
	return(com);
}

int main(int argc, char *argv[]) 
{
	int x;
	int n,r;
	int res_combination, res_factorial, res_get_integer;
	
	res_combination = combination(n,r);
	res_factorial = factorial(n,r);
	res_get_integer = get_integer(n,r);
	
	printf("%i %i %i\n", res_combination, res_factorial, res_get_integer);

	printf("main x is at %p\n", &x);
	func(x);
	combination(2,3);

	
	return 0;
 }

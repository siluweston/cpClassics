/*
Input positive integers a,b,c, output a/b accurate to the c-th decimal place. a,b<=1e6, c<=100. Terminate when a=b=c=0.
Input:
1 6 4
0 0 0
Output:
Case 1: 0.1666
*/
#include<iostream>
using namespace std;

int main() 
{
	int a, b, c;

	while ( scanf("%d%d%d",&a,&b,&c) == 3 && a && b && c ) {
		int num = 0; 
		int left = a;

		for ( int i = 0; i <= c; i++ ) {
			if ( i == 1 )
				printf(".");
			num = left / b;
			printf("%d", num);
			left -= num*b;
			left *=10;
		}
		printf("\n");
	}
	
}

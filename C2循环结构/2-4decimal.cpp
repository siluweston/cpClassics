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

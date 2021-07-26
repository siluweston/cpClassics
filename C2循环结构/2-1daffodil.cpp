/* 
Output all daffodil numbers, which are defined by 3 digit numbers ABC such ABC=A^3+B^3+C^3.
Such as 153=1^3+5^3+3^3.
*/
#include<iostream>
using namespace std;

int main()
{
	for ( int a = 1; a < 10; a++ )
		for ( int b = 0; b < 10; b++ )
			for ( int c = 0; c < 10; c++ ) {
				if ( a*a*a+b*b*b+c*c*c == 100*a+10*b+c )
					cout << 100*a+10*b+c << endl;
			}
	return 0;
}

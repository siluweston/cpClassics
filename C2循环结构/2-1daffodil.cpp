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

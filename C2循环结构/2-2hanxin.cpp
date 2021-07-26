#include<iostream>
using namespace std;

int main()
{
	int a,b,c, kase = 1;
	while ( cin >> a >> b >> c ) {
		for ( int i = 10; i <= 100; i++ )
			if ( i%3==a && i%5==b && i%7==c ) {
				cout << "Case " << kase << ": " << i << endl;
				break;
			}
			else if ( i == 100 )
				cout << "Case " << kase << ": No answer" << endl;
		kase++;
	}
	return 0;
}


/*
Input 3 non-negative numbers a,b,c. Representing the modulo equivalence value of some number X in mod 3, 5, 7 respectively. 
Given 10<=X<=100, output the smallest X possible or state no possible answer.
Input:
2 1 6
2 1 3
Output:
Case 1: 41
Case 2: No answer
*/
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


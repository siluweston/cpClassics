#include<iostream>
using namespace std;

int main()
{
	for ( int num = 123; num <= 329; num++ ) {
		int num2 = num*2, num3 = num*3;
		int a = num/100, b = (num/10)%10, c = num%10;
		int d = num2/100, e = (num2/10)%10, f = num2%10;
		int g = num3/100, h = (num3/10)%10, i = num3%10;
		
		int boolean = 0;
		for ( int k = 1; k < 10; k++ ) {
			int count = 0;
			if ( k == a )
				count++;
			if ( k == b )
				count++;
			if ( k == c )
				count++;
			if ( k == d )
				count++;
			if ( k == e )
				count++;
			if ( k == f )
				count++;
			if ( k == g )
				count++;
			if ( k == h ) 
			    count++;
			if ( k == i )
				count++;
			
			if ( count != 1 )
				boolean++;	
		}
		if ( boolean == 0 )
			printf("%d%d%d %d%d%d %d%d%d\n",a,b,c,d,e,f,g,h,i);
	}
}

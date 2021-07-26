/*
Given positive integers n<m<1e6, output 1/(n^2) + 1/((n+1)^2) + ... + 1/(m^2), keeping 5 decimal places. Terminate when n=m=0.
Input:
2 4
65536 655360
0 0 
Output:
Case 1: 0.42361
Case 2: 0.00001
*/
#include<iostream>
using namespace std;

int main()
{
    int kase = 1, n, m;
	
	while ( scanf("%d %d", &n, &m) == 2 && n && m ) {
		double sum = 0.0;
		for ( long long i = n; i <= m; i++ )
			sum += 1.00/(i*i);
		printf("Case %d: %.5f\n", kase++, sum);
	}
}

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

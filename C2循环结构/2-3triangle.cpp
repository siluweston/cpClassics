#include<iostream>
using namespace std;

int main()
{
	int n, row = 0;
	cin >> n;

	for ( int i = n-1; i >= 0; i-- ) {
		int rownum = i*2+1;
		for ( int j = 0; j < row; j++ )
			cout << " ";
		for ( int j = 0 ; j < rownum; j++ )
			cout << "#";
		cout << endl;
		row++;
	}
}

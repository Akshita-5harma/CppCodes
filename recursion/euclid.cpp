#include <iostream>
#include <cstdlib>

using namespace std;

/* euclid's algorithm to find the highest common factor (hcf/gcd) of two integers */
/* a no. divides x and y iff it divides y and x%y, because x = x%y + c*y */

int hcf(int x, int y)
{
	if(x==0) return y;
	else return hcf(y%x, x);
}


int main(int argc, char* argv[])
{
	int m = atoi(argv[1]) > atoi(argv[2]) ? atoi(argv[2]) : atoi(argv[1]);
	int n = atoi(argv[1]) > atoi(argv[2]) ? atoi(argv[1]) : atoi(argv[2]);

	// we need n >= m

	cout<<hcf(m, n);
	return 0;
}
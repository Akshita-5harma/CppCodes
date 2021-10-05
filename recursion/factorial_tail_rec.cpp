#include <iostream>
#include <cstdlib>

using namespace std;

int factorial(int n, int fact = 1)
{
	if(n==0) return fact;
	else return factorial(n-1, n*fact);
}

int main(int argc, char* argv[])
{
	cout<<factorial(atoi(argv[1]));
	return 0;
}
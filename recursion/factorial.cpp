#include <iostream>
#include <cstdlib>

using namespace std;

int factorial(int n)
{
	if(n==0) return 1;
	else return n*factorial(n-1);
}

int main(int argc, char* argv[])
{
	cout<<factorial(atoi(argv[1]));
	return 0;	
}
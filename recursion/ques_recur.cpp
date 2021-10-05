#include <iostream>
#include <cstdlib>

using namespace std;

/* 
	this recursive program is questionable because we cannot prove that it will
	necessarily terminate for large numbers, because one of the arguments passed is 
	not becoming smaller in each step.
*/
int questionable(int n)
{
	if(n==1) return 1;
	if(n%2==0) return questionable(n/2);
	else return questionable(3*n+1);
}

int main(int argc, char* argv[])
{
	cout<<questionable(atoi(argv[1]));
	return 0;
}
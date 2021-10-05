#include "list.h"
#include <iostream>
#include <sstream>

using std::stringstream;
using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
	int n, b, e;

	for (int i = 1; i < argc; ++i)
	{
		stringstream s(argv[i]);
		if (i == 1) s >> n;
		else if (i == 2) s >> b;
		else s >> e;
		
	}

	Node* l = randomList(n, b, e);
	cout << "The random list is: "<<endl;
	printList(l);
	cout << "The reversed list is: " << endl;
	printList(reverseList(l));
	
	return 0;
}
#include <iostream>
using namespace std;

struct Node
{
	int val;
	Node* next;

	//constructors
	Node() :val(0), next(NULL) {};
	Node(int v) :val(v), next(NULL) {};
	Node(int v, Node* n) :val(v), next(n) {};
};

Node* reverse_list(Node* head)
{
	Node* p = head, * q, * r = NULL;

	while (p != NULL)
	{
		q = p->next;
		p->next = r;
		r = p;
		p = q;
	}

	return r;
}

void PrintList(Node* head)
{
	if (head == NULL) {
		cout << endl; return;
	}
	cout << head->val << " ";
	PrintList(head->next);
}
void PrintReverse(Node* head)
{
	if (head == NULL) return;
	PrintReverse(head->next);
	cout << head->val << " ";
}





void printList(Node* head)
{
	while (head != NULL)
	{
		cout << head->val << " -> ";
		head = head->next;
	}
	cout << "NULL" << endl;
}
Node* reverseList(Node* head)
{
	// O(N), N = no of nodes in the list
	// n1 -> n2 -> n3 -> n4 -> NULL
	// NULL <- n1 <- n2 <- n3 <- n4

	Node* r = NULL, * p = head, * q;
	while (p != NULL)
	{
		q = p->next;
		p->next = r;
		r = p;
		p = q;
	}
	return r;
}
void insertAfter(Node* n, int val)
{
	Node* newNode = new Node(val);
	newNode->next = n->next;
	n->next = newNode;
}
void insertAt(Node* head, int idx, int val)
{
	// 0 based indexing
	Node* n = new Node(val);

	if (idx == 0) 
	{
		n->next = head; return;
	}

	int i = 0;
	while (i++ < idx && head->next != NULL) head = head->next;

	n->next = head->next;
	head->next = n->next;
}
int main(int argc, char* argv[])
{
	// st, st+1, st+2,... end
	// Z, [st, end]

	int st = atoi(argv[1]), end = atoi(argv[2]);
	Node* node = new Node(st), * head = node;

	for (int i = st + 1; i <= end; ++i)
		node = (node->next = new Node(i));

	PrintReverse(head);
	// insertAt(head, 8, 88);
	//insertAfter(head->next->next, 88);
	//printList(head);
	cout << endl;
	PrintReverse(reverse_list(head));

	return 0;
}



































/*#include <iostream>
using namespace std;
struct Node
{
	int val;
	Node* next;

	Node() :val(0), next(NULL) {};
	Node(int v) :val(v), next(NULL) {};
	Node(int v, Node* n) :val(v), next(n) {};
};
void printList(Node* head)
{
while(head!=NULL)
{
cout<<head->val<<" -> ";
head = head->next;
}
cout<<"NULL"<<endl;
}
int main()
{
Node* node = new Node(1), *head = node;
for(int i=2; i<=8; ++i)
	node = (node->next = new Node(i));
printList(head);
return 0;
}*/
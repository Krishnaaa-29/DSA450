#include <bits/stdc++.h>
using namespace std;

Node *copyRandomList(Node *head)
{

	if (head == NULL)
		return NULL;
	// step1

	Node *ptr = head;

	while (ptr != NULL)
	{
		Node *newNode = new Node(ptr->val);
		newNode->next = ptr->next;
		ptr->next = newNode;
		ptr = ptr->next->next;
	}

	// step2
	ptr = head;

	while (ptr != NULL)
	{
		if (ptr->random != NULL)
			ptr->next->random = ptr->random->next;
		ptr = ptr->next->next;
	}

	// step3
	Node *dummy = new Node(-1);
	ptr = head;
	Node *fast, *newptr = dummy;
	while (ptr != NULL)
	{

		fast = ptr->next->next;
		newptr->next = ptr->next;
		newptr = newptr->next;
		ptr->next = fast;
		ptr = fast;
	}

	return dummy->next;
}

#include <bits/stdc++.h>
using namespace std;

Node *copyRandomList(Node *head)
{

    Node *curr = head;

    while(curr != NULL){

        Node *temp = curr->next;
        curr->next = new Node(curr->val);
        curr->next->next = temp;
        curr = temp;
    }

    curr = head;

    while(cur != NULL){

        if(curr != NULL){

            if(curr->next != NULL){

                curr->next->random = (curr->random != NULL) ? curr->random->next : NULL;
            }

        }

        curr = curr->next->next;
    }

    Node *original = head;
    Node *copy = head->next;
    Node *temp = copy;

    while(original != NULL){

        original->next = original->next->next;
        copy->next = copy->next->next;

        original = original->next;
        copy = copy->next;
    }

    return temp;
}
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

// inserting a node at the end of the list

void insertattail(node * &head, int val){

    node* n = new node(val);
    node* temp = head;

    if (head == NULL)
    {
        head = n;
        return;
    }

    while(temp->next !=NULL){
        temp = temp->next;
    }

    temp->next = n;
}

// inserting a node at the head or start of the list

void insertathead(node* &head, int val){

    node* n = new node(val);
    n->next = head;
    head = n;
}

// for searching a particular value in the list

bool search(node* head, int key){

    node* temp = head;
    while(temp!=NULL){
        if(temp->data == key){
            return true;
        }

        temp = temp->next;
    }

    return false;
}

// deleting an element which is present at the start of the list

void deleteatstart(node *&head)
{

    node *todelete = head;
    head = head->next;

    delete todelete;
}

// deleting an element present in the list

void deletion(node* &head, int val){

    if (head == NULL)
    {
        return;
    }

    if (head->next == NULL)
    {
        deleteatstart(head);
        return;
    }

    node* temp = head;
    while(temp->next->data != val){
        temp = temp->next;
    }

    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

//printing the list

void display(node* head){

    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

// swapping two nodes

void swap(node* &head){

    node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }

    temp->next->next = head->next;
    node* temp2 = head;
    head = temp->next;
    temp->next = temp2;
    temp2->next = NULL; 
}

//reverse in 'k' groups

node* reversek(node* &head, int k){

    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;
    int count = 0;

    while(currptr != NULL && count<k){
        
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    if(nextptr != NULL){
        head->next = reversek(nextptr,k);
    }

    return prevptr;
}

int main(){

    node* head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    insertattail(head, 5);
    insertattail(head, 6);
    display(head);
    node* newhead = reversek(head,2);
    display(newhead);
    swap(head);
    display(head);

    return 0;
}
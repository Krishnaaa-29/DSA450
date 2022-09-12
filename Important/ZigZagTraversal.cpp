#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void zigzag(node* root){

    if (root == NULL)
    {
        return;
    }

    stack<node*> currlevel;
    stack<node*> nextlevel;

    bool ltr = true;

    currlevel.push(root);

    while(!currlevel.empty()){

        node* temp = currlevel.top();
        currlevel.pop();

        if(temp){

            cout<<temp->data<<" ";

            if(ltr){

                if(temp->left){
                    nextlevel.push(temp->left);
                }

                if(temp->right){
                    nextlevel.push(temp->right);
                }
            }

            else{

                if(temp->right){
                    nextlevel.push(temp->right);
                }

                if(temp->left){
                    nextlevel.push(temp->left);
                }
            }

            if(currlevel.empty()){

                ltr = !ltr;
                swap(currlevel, nextlevel);
            }
        }
    }
    
}

int main(){

    node* root = new node(12);
    root->left = new node(10);
    root->right = new node(11);
    root->left->right = new node(8);
    root->right->left = new node(9);
    root->right->right = new node(10);
    root->right->right->left = new node(5);

    zigzag(root);
    cout<<endl;

    return 0;
}
#include<bits/stdc++.h>
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

node* LCA(node* root, int n2, int n1){

    if(root == NULL){

        return NULL;
    }

    if(root->data == n1 || root->data == n2){

        return root;
    }

    node* leftLCA = LCA(root->left, n2, n1);
    node* rightLCA = LCA(root->right, n2, n1);

    if(leftLCA && rightLCA){

        return root;
    }

    if(leftLCA != NULL){

        return leftLCA;
    }

    if(rightLCA != NULL){

        return rightLCA;
    }

}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    int n1 = 4;
    int n2 = 5;

    node* lca = LCA(root, n2, n1);

    if(lca == NULL){

        cout<<"LCA doesn't exist"<<endl;
    }

    else{

        cout<<"LCA exists at "<<lca->data;
    }

    return 0;
}

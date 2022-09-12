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

void printsubtrees(node* root, int k){

    if(root == NULL || k<0){

        return;
    }

    if(k == 0){

        cout<<root->data<<" ";
        return;
    }

    printsubtrees(root->left, k-1);
    printsubtrees(root->right, k-1);

}

int nodesatk(node* root, node* target, int k){

    if(root == NULL){

        return -1;
    }

    if(root == target){

        printsubtrees(root,k);
        return 0;
    }

    int dl = nodesatk(root->left, target, k);

    if(dl != -1){

        if(dl + 1 == k){

            cout<<root->data<<" ";
        }

        else{

            printsubtrees(root->right, dl - k - 2);
        }

        return 1 + dl;
    }

    int dr = nodesatk(root->right, target, k);

    if (dr != -1)
    {

        if (dr + 1 == k)
        {

            cout << root->data << " ";
        }

        else
        {

            printsubtrees(root->left, dr - k - 2);
        }

        return 1 + dr;
    }

    return -1;
}



int main(){

    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    nodesatk(root, root->left, 1);

    return 0;
}
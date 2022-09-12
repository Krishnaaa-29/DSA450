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

int levelOrder(node* root){

    queue <node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        node* temp = q.front();
        q.pop();

        if(temp == NULL){

            cout<<endl;
            if(!q.empty()){
                
                q.push(NULL);
            }
        }

        else{

            cout<<temp->data<<" ";

            if(temp->left){

                q.push(temp->left);
            }

            if(temp->right){

                q.push(temp->right);
            }
        }
    }
}

node* createtree(node* root){

    cout<<"Enter the data: ";
    int data;
    cin>>data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data for left child of "<<data<<endl;
    root->left = createtree(root->left);

    cout<<"Enter the data for right child of "<<data<<endl;
    root->right = createtree(root->right);

    return root;
}

int main(){

    node* root = NULL;

    root = createtree(root);
    levelOrder(root);

    return 0;
}
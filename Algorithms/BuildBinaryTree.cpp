#include <bits/stdc++.h>
using namespace std;

struct node
{

    int data;
    node *left;
    node *right;

    node(int val)
    {

        data = val;
        left = NULL;
        right = NULL;
    }
};

int findpos(int in[], int element, int n){

    for(int i = 0; i<n; i++){

        if(in[i] == element){
            return i;
        }
    }

    return -1;
}

node* solveforpost(int in[], int post[], int idx, int start, int end, int n){

    if( idx < 0 || start > end){
        return NULL;
    }

    int element = post[idx];
    idx--;
    node* root = new node(element);
    int pos = findpos(in, element, n);

    root->right = solve(in, post, idx, pos+1, end,n);
    root->left = solve(in, post, idx, start, pos-1,n);

    return root; 
}

node *solveforpre(int in[], int pre[], int idx, int start, int end, int n)
{

    if (idx >= n || start > end)
    {
        return NULL;
    }

    int element = pre[idx];
    idx++;
    node *root = new node(element);
    int pos = findpos(in, element, n);

    root->left = solve(in, pre, idx, start, pos - 1, n);
    root->right = solve(in, pre, idx, pos + 1, end, n);

    return root;
}

node* BuildPostTree(int in[], int post[], int n){

    int idx = n-1;
    node* ans  = solveforpost(in, post, idx, 0, n-1, n);

    return ans;
}

node* BuildPreTree(int in[], int pre[], int n){

    int idx = 0;
    node* ans = solveforpre(in, pre, idx, 0, n-1, n);

    return ans;
}

int main(){

    int in[] = {4, 2, 5, 1, 6, 3, 7};
    int post[] = {4, 5, 2, 6, 7, 3, 1};
    int pre[] = {1, 2, 4, 5, 3, 6, 7};

    int n = 7;

    BuildTree(in, post, n);

    return 0;
}
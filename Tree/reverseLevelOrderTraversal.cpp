#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int x){
        data = x;
        left=right=nullptr;
    }
};
//Find height of tree
int height(Node *node){
    if(node == nullptr)
    return 0;

    int lheight = height(node->left);
    int rheight = height(node->right);

    return max(lheight, rheight)+1;
}

//print nodes
void print(Node *root, int nodeLevel, int reqLevel){
    if(root == nullptr)
    return;

    //if requeired level is reached
    if(nodeLevel == reqLevel){
        cout<<root->data<<" ";
        return;
    }
    //else call left and right subtree
    else if(nodeLevel <reqLevel){
        print(root->left, nodeLevel+1, reqLevel);
        print(root->right, nodeLevel+1, reqLevel);
    }
}
//reverse level order traversal
void reverseLevelOrder(Node *root){
    int h = height(root);
    for(int i=h; i>=1; i--){
        print(root, 1, i);
        cout << endl; // Print each level on a new line
    }
}
int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    reverseLevelOrder(root);
    return 0;
}
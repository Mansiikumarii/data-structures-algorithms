#include<iostream>
using namespace std;
#include<queue>
class node{
    public:
    int data;
    node* left;
    node* right;
node(int d){
    this->data = d;
    this->left = NULL;
    this ->right = NULL;
}
};

node* buildTree(){
   cout<<"Enter the data "<<endl;
   int data;
   cin>>data;

   if(data == -1){
    return NULL;
   }
   node* root = new node(data);
   cout<<"Enter data for inserting in left "<<endl;
   root->left = buildTree();
   cout<<"Enter data for inserting in right "<<endl;
   root->right = buildTree();
   return root;

}
void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root); //kyunki node* type hai
    q.push(NULL); //level complete ho gya, isko nahi lagaenge toh ek hi line main aa jaega saara output
    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){//purana level traverse ho gaya
            cout<<endl;
            if(!q.empty()){//queue still has some child node
                q.push(NULL);
            }

        }
        else{
            cout<<temp->data<<" ";
            if (temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
       
    }
}

void inorder(node* root){
    //base case
if(root == NULL)
return;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

void postorder(node* root){
    if(root==NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    
}

void preorder(node* root){
    //base case
if(root == NULL)
return;
cout<<root->data<<" ";
preorder(root->left);
preorder(root->right);
}

// void buildFromLevelOrder(node* &root){
//     queue<node*>q;
//     cout<<"Enter data for root "<<endl;
//     int data;
//     cin>>data;
//     q.push(root);
//     while(!q.empty()){
//         node* temp = q.front();
//         q.pop();
//         cout<<"Enter left node for: "<<root->data<<endl;
//         int leftData;
//         cin>>leftData;

//         if(leftData != -1){
//             temp->left = new node(leftData);
//             q.push(temp->left);
//         }
//         cout<<"Enter right node for: "<<root->data<<endl;
//         int rightData;
//         cin>>rightData;

//         if(rightData != -1){
//             temp->right = new node(rightData);
//             q.push(temp->right);
//         }
//     }
// }
int main(){
    node* root = NULL;
    root = buildTree();
    cout<<"Printing level order travesal "<<endl;
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelOrderTraversal(root);
    cout<<"Inorder traversal is: "<<endl;
    inorder(root);
     cout<<endl<<"Preorder traversal is: "<<endl;
    preorder(root);
    cout<<endl<<"Postorder traversal is: "<<endl;
    postorder(root);
    return 0;
}
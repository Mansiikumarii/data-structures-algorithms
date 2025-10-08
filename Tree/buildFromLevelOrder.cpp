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

void buildFromLevelOrder(node* &root){
    queue<node*>q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    if(data == -1) {
        root = NULL;
        return;
    }
    root = new node(data);
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"Enter left node for: "<<temp->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for: "<<temp->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
void printLevelOrder(node* root) {
    if(!root) return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()) {
        node* temp = q.front();
        q.pop();
        cout << temp->data << " ";
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    cout << endl;
}
int main(){
    node* root = NULL;
    buildFromLevelOrder(root);
    printLevelOrder(root);
    return 0;
}
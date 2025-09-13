#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    //constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value = this->data;
        if(this->next !=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with data " <<value<<endl;
    }
};

void InsertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void InsertAtPosition(Node* &head, int position, int d){
    if(position == 1){
        InsertAtHead(head, d);
        return;
    }
    Node* temp = head;
    int cnt = 1;
    while (cnt < position-1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }
    if(temp == NULL) return; // position out of bounds
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void Print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deleteNode(int position, Node* & head, Node* & tail){
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //memory free
         // If tail was head, update tail
        if(temp == tail) 
        tail = head;
        temp->next = NULL;
        delete temp;

    }
    else{
        //deleteting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt <= position && curr != NULL){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if(curr == NULL) return; // position out of bounds
       
        //linking
        if(curr == tail) tail = prev;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    Print(head); // prints 10
    InsertAtHead(head, 20);
    Print(head); // prints 20 10

    InsertAtTail(tail, 15);

    InsertAtPosition(head, 3, 22);
    Print(head); // prints 20 10 22 15

    cout <<"head " << head->data << endl;
    cout<<"tail "<<tail->data <<endl;
    deleteNode(1,head,tail);
    Print(head);
    cout<<"tail "<<tail->data <<endl;
    return 0;
}
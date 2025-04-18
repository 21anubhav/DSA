#include <iostream>
using namespace std;

struct Node{
int data;
Node *next;
Node (int x){
    data=x;
    next=NULL;
}
};

void print(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}
Node *delHead(Node *head){
       if(head==NULL){
    return NULL;
}
else{
    Node *temp=head->next;
    delete head;
    return temp;
}
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Original list: ";
    print(head);

    // Delete head
    head = delHead(head);

    cout << "After deleting head: ";
    print(head);

    return 0;
}

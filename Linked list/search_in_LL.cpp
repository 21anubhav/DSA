#include <iostream>
using namespace std;

struct Node{
int data;
Node *next;
Node(int x){
    data=x;
    next=NULL;
}
};
int search(Node *head,int x){
    int pos =1;
    Node *curr=head;
    while(curr!=NULL){
        if(curr->data==x){
            return pos;
        }
        else{
            pos++;
            curr=curr->next;
        }
    }
    return -1;
}

void print(Node *head){
    Node *curr=head;
    while(curr !=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    cout << "Linked list: ";
    print(head);
    cout << endl;

    int x = 20;
    int pos = search(head, x);
    if (pos != -1) {
        cout << "Element " << x << " found at position " << pos << endl;
    } else {
        cout << "Element " << x << " not found in the list" << endl;
    }

    return 0;
}
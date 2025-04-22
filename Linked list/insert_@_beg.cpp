#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void print(Node *head){
    Node *curr = head;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
}

Node* insertAtBeginning(Node *head, int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int main(){
    Node *head = new Node(10);
    head = insertAtBeginning(head, 20);
    head = insertAtBeginning(head, 30);
    print(head);
    return 0;
}

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
    Node(int x) {
        data = x;
        next = prev = NULL;
    }
};

Node *insertEnd(Node *head, int data) {
    Node *temp = new Node(data);
    if (head == NULL) return temp;

    Node *curr = head;
    while (curr->next != NULL)
        curr = curr->next;

    curr->next = temp;
    temp->prev = curr;
    return head;
}

void printlist(Node *head) {
    Node *curr = head;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    Node *head=NULL;
    head = insertEnd(head, 10);
    head=insertEnd(head,20);
    printlist(head);

    return 0;
}

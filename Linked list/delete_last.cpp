#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
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

Node *dellast(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    
        Node *curr=head;
        while(curr->next->next!=NULL){
                curr=curr->next;
          }
    delete (curr->next);
    curr->next=NULL;
    return head;
}

int main(){
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    cout<<"original:";
    print(head);
    cout<<"after deletion:";
    head=dellast(head);
    print(head);
    return 0;
}
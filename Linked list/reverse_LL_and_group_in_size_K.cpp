#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *reverseK(Node *head,int k){
    Node *curr=head,*next=NULL,*prev=NULL;
    int count=0;
    while(curr!=NULL&&count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        Node *rest_head=reverseK(next,k);
        head->next=rest_head;
    }
    return prev;
}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	head->next->next->next->next->next=new Node(60);
	head->next->next->next->next->next->next=new Node(70);
	printlist(head);
	head=reverseK(head,3);
	printlist(head);
	return 0;
} 






//iterative sol
#include <iostream>
using namespace std;

struct Node{
int data;
Node *next;
Node (int x){
    data = x;
    next = NULL;
}
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    cout<<endl;
}

Node *reversek(Node *head,int k){
    Node *curr=head,*prevfirst=NULL;
    bool isfisrtpass =true;
    while(curr!=NULL){
        Node *first = curr,*prev=NULL;
        int count=0;
        while(curr!=NULL&&count<k){
            Node *next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(isfisrtpass){head=prev;isfisrtpass=false;}
        else{prevfirst->next=prev;}
        prevfirst=first;
    }
    return head;

}

int main() 
{ 
	Node *head=new Node(10);
	head->next=new Node(20);
	head->next->next=new Node(30);
	head->next->next->next=new Node(40);
	head->next->next->next->next=new Node(50);
	head->next->next->next->next->next=new Node(60);
	head->next->next->next->next->next->next=new Node(70);
	printlist(head);
	head=reversek(head,3);
	printlist(head);
	return 0;
} 
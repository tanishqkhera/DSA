#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    node(int value){
        data=value;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* n= new node(val);
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int val){
    node* newNode= new node(val);
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
        node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->next=head;
}

void display(node * head){
    node* temp=head;

    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
}

int main(){
    node* head=NULL;
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,1);
    insertAtTail(head,4);
    display(head);
}
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

void pushAtHead(Node* &head,int val){
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
}

void push(Node* &head,int val){
    if(head==NULL){
        pushAtHead(head,val);
        return;
    }
    Node* newNode=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

Node* getTail(Node* &head){
    Node* temp=head;
    while(temp!=NULL || temp->next!=NULL){
        temp=temp->next;
    }

    return temp;
}

Node* partition(Node* &head,Node* &end)
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
void insertAtHead(Node* &head, int val){
    Node* newNode= new Node(val);
    newNode->next=head;
    head=newNode;
}

void push(Node* &head,int val){
    if(head==NULL){
        insertAtHead(head,val);
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

Node* Merge(Node* &h1,Node* &h2){
    if(h1==NULL){
        return h2;
    }
    if(h2==NULL){
        return h1;
    }


    Node* c;

    if(h1->data <h2->data){
        c=h1;
        c->next=Merge(h1->next,h2);
    }
    else{
        c=h2;
        c->next=Merge(h1,h2->next);
    }

    return c;
}

Node* midPoint(Node* &head){
    Node* slow=head;
    Node*fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

Node* mergesort(Node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node * mid=midPoint(head);

    Node* a=head;
    Node* b=mid->next;
    mid->next=NULL;

    a=mergesort(a);
    b=mergesort(b);

    return Merge(a,b);
}

int main(){
    Node* head=NULL;
    push(head,3);
    push(head,2);
    push(head,6);
    push(head,1);
    push(head,10);
    display(head);
    Node* newhead=mergesort(head);
    display(newhead);
}
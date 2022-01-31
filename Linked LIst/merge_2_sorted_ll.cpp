#include<iostream>
#include<bits/stdc++.h>
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
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node * &head, int val){
    node *n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node *temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp !=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deleteAtHead(node * &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}

void deleteion(node* &head,int value ){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
    }

    node* temp=head;
    while(temp->next->data !=value){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;
}

int length(node* head){
    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}


node* Merge(node* &head1, node* &head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }

    node* c;
    if(head1->data<head2->data){
        c=head1;
        c->next=Merge(head1->next,head2);
    }
    else{
        c=head2;
        c->next=Merge(head1,head2->next);
    }

    return c;
}

int main(){
    node* head1=NULL;
    node* head2=NULL;
    insertAtTail(head2,2);
    insertAtTail(head2,5);
    insertAtTail(head2,8);
    display(head2);
    insertAtTail(head1,4);
    insertAtTail(head1,6);
    insertAtTail(head1,9);
    display(head1);

    node* newHead=Merge(head1,head2);
    display(newHead);
}
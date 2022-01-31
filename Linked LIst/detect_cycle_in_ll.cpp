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

void MakeCycle(node* &head,int pos){
    node* temp=head;
    node* startNode;

    int counter=1;
    while(temp->next!=NULL){
        if(counter==pos){
            startNode=temp;
        }
        temp=temp->next;
        counter++;
    }

    temp->next=startNode;
}

bool detectCycle(node* &head){
    node* slowptr=head;
    node* fastptr=head;
    while(fastptr!=NULL && fastptr->next!=NULL){
        slowptr=slowptr->next;
        fastptr=fastptr->next->next;

        if(fastptr==slowptr){
            return true;
        }
    }
    return false;
}

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    int pos=3;
    MakeCycle(head,pos);
    detectCycle(head)?cout<<"circular":cout<<"not Circular";
    return 0;
}
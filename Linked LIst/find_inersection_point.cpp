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

int intersection(node * &head1,node* &head2){

    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    node* ptr1;
    node* ptr2;

    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }

    while(d){
        ptr1=ptr1->next;
        if(ptr1==NULL){
            return -1;
        }
        d--;

    }

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    return -1;
}

void intersect(node* &head1,node* &head2,int pos){
    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }

    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

int main(){
    node* head1=NULL;
    node * head2=NULL;
    int arr[7]={1,2,3,4,5,6,7};
    int a[5]={8,9,0,1,2};
    for(int i=0;i<7;i++){
        insertAtTail(head1,arr[i]);
    }
    for(int i=0;i<5;i++){
        insertAtTail(head2,a[i]);
    }
    intersect(head1,head2,4);
    display(head1);
    display(head2);
    cout<<intersection(head1,head2);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

void push(Node* &top,int value){
    Node *newNode = new Node(value);
    if(top==NULL){
        newNode->next=NULL;
    }
    else{
        newNode->next=top;
    }
    top=newNode;
}

void pop(Node* &top){
    if(top==NULL){
        return;
    }
    else{
        Node *temp=top;
        top= temp->next;
        delete temp;
    }
}

void display(Node* top){
        Node* temp=top;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
}

int main(){
    Node *top=NULL;
    push(top,1);
    push(top,2);
    push(top,4);
    push(top,3);
    display(top);
    pop(top);
    display(top);
}
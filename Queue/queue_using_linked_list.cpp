#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

class Queue{
    Node* front;
    Node* back;

    public:
    Queue(){
        front=NULL;
        back=NULL;
    }

    void enqueue(int x){

        Node* n=new Node(x);
        if(front==NULL){
            back=n;
            front=n;
            return;
        }
        back->next=n;
        back=n;

    }

    void dequeue(){
        if(front==NULL){
            cout<<"Queue underflow!"<<endl;
            return;
        }
        Node* todelete=front;
        front=front->next;

        delete todelete;
    }

    int peek(){
        if(front==NULL){
            cout<<"No element in queue"<<endl;
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};

int main(){
    Queue q;
    for(int i=1;i<10;i++){
        q.enqueue(i);
    }
    for(int i=1;i<10;i++){
        cout<<q.peek()<<endl;
        q.dequeue();
    }

    if(q.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }
    return 0;
}
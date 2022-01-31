#include <bits/stdc++.h>
using namespace std;
int n =20;

class Queue{
    int *arr;
    int front;
    int back;

    public:

    Queue(){
        arr=new int[n];
        front =-1;
        back=-1;
    }

    void enqueue(int x){
        if(back==n-1){
            cout<<"Queue Overflow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }
    }

    void dequeue(){
        if(front==-1 || front>back){
            cout<<"No element in queue"<<endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front==-1 || front>back){
            cout<<"No element in queue"<<endl;
            return -1;
        }

        return arr[front];
    }

    bool empty(){
        if(front==-1 || front>back){
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

}
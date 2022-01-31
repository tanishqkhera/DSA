#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int>s1;
    public:
    void enqueue(int x){
        s1.push(x);
    }
    int dequeue(){
        if(s1.empty()){
            cout<<"Queue is empty";
            return -1;
        }
        int x=s1.top();
        s1.pop();
        if(s1.empty()){
            return x;
        }
        int item=dequeue();
        s1.push(x);
        return item;
    }
    bool empty(){
        if(s1.empty()){
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
        cout<<q.dequeue()<<endl;
    }

    if(q.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"Not Empty"<<endl;
    }
    return 0;
}
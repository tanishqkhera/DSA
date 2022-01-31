#include <bits/stdc++.h>
using namespace std;
class Queue{
    stack<int> s1,s2;

    public:
    
    void enqueue(int x){
        s1.push(x);
    }
    int dequeue(){
        if(s1.empty() && s2.empty()){
            cout<<"Queue is empty";
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int top_value=s2.top();
        s2.pop();

        return top_value;
    }

    bool empty(){
        if(s1.empty()&& s2.empty()){
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
#include<iostream>
#define n 100
using namespace std;

class stack{
    int *arr;
    int top;

    public:
    stack(){
        arr= new int[n];
        top=-1;
    }

    void Push(int x){
        if(top==(n-1)){
            cout<<"Stack Overflow!"<<endl;
            return;
        }

        top++;
        arr[top]=x;
    }

    void Pop(){
        if(top==-1){
            cout<<"No Element to pop"<<endl;
            return;
        }

        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool Empty(){
        return top == -1;
    }
};

int main(){
    stack st;
    st.Push(5);
    st.Push(7);
    st.Push(9);
    st.Pop();
    cout<<st.Top()<<endl;
}
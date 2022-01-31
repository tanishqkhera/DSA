#include<iostream>
using namespace std;
int main(){
    int a[8]={5,4,1,4,23,5,1,9};
    int res=0;
    for(int i=0;i<8;i++){
        res=res^a[i];
    }
    int temp=res;
    int pos=0;
    while(!(res&(1<<pos))){
        pos++;
    }
    for(int i=0;i<8;i++){
        if(a[i]&(1<<pos)){
            a[i]=0;
        }
    }
    for(int i=0;i<8;i++){
        temp=temp^a[i];
    }
    res=res^temp;
    cout<<res<<" "<<temp;
}
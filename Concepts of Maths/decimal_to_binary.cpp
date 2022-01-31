#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int r,a[32]={0};
    int i=0;
    while(n!=0){
        if(n%2){
        a[i]=1;
        }
        else{
            a[i]=0;
        }
         n=n/2;
         i++;
    }
    for(int i=31;i>=0;i--){
        cout<<a[i];
    }
}
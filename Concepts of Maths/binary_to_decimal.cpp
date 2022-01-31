#include<iostream>
using namespace std;
int main(){
    int n,r;
    cin>>n;
    int temp=n;
    int count=0;
    while(temp!=0){
        temp=temp/10;
        count++;
    }
    int a[count];
    for(int i=0;i<count;i++){
        r=n%10;
        a[i]=r;
        n=n/10;
    }
    int dec=0;
    for(int i=0,j=1;i<count;i++,j=j*2){
        dec=dec+(a[i]*j);
    }
    cout<<dec;
}
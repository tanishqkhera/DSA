#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int temp=n;
    int sum=0,r;
    while(n!=0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    cout<<sum;
}
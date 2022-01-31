#include<iostream>
using namespace std;
int main(){
    int n,res=1;
    cin>>n;
    if(n==0){
        res=1;
    }
    else{
        for(int i=1;i<=n;i++){
            res=res*i;
        }
    }
    cout<<res;
}
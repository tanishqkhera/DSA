#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int res=a^b;
    int count=0;
    while(res){
        res=res&(res-1); //use n&(n-1) to find number of digits
        count++;
    }
    cout<<count;
}
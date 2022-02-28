#include <iostream>
//used for mapping big numbers into a small range and to prevent integer overflow
using namespace std;
int FastPower(int a,int b){
    int result=1;
    while(b>0){
        if((b&1)){
            result=result*a;
        }
        a=a*a;
        b=b>>1;
    }
    return result;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<FastPower(n,p);
}
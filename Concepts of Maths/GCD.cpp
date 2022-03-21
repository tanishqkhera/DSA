#include <iostream>
#include <cmath>
using namespace std;
//for a>b gcd(a,b)=gcd(a,a%b)
int gcd(int a,int b){
    if(!b){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
}
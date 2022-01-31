#include <bits/stdc++.h>
using namespace std;
int binary_multiplication(int a, int b){
    int result=0;
    while(b){
        if(b&1){
            result=result+a;
        }
        a=a+a;
        b=b>>1;
    }
    return result;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<binary_multiplication(a,b);
}
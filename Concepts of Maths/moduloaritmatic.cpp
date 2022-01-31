#include <iostream>
using namespace std;
long Modulo(long a,long b){
    long long n=100000007;
    long result=1;
    while(b>0){
        if((b&1)!=0){
            result=(result * a % n) % n;
        }
        a=(a%n * a%n)%n;
        b=b>>1;
    }
    return result;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<Modulo(n,p);
}
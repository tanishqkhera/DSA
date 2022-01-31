#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n+1]={0};
    for(int i=2;i<=n;i++){
        a[i]=1;
    }
    for(int i=2;i<=sqrt(n);i++){
        for(int j= 2*i;j<=n;j+=i){
            a[j]=0;
        }
    }

    for(int i=0;i<=n;i++){
        if(a[i]==1){
            cout<<i<<" ";
        }
    }
}
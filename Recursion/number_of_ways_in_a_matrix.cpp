#include<iostream>
using namespace std;
int NumberOfWays(int n, int m){
    if(n==1 || m==1){
        return 1;
    }
    return NumberOfWays(n-1,m)+NumberOfWays(n,m-1);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<NumberOfWays(n,m);
}
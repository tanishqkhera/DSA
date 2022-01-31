#include <bits/stdc++.h>
using namespace std;
vector <int> prime_factors(int n){
    vector <int> v;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            v.push_back(i);
            n=n/i;
        }
    }
    if(n>1){
        v.push_back(n);
    }

    return v;
}

int main(){
    int n;
    cin>>n;
    auto res=prime_factors(n);
    for(auto i:res){
        cout<<i<<" ";
    }
}
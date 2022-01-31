#include<bits/stdc++.h>
using namespace std;

void divisors(int n){
    int count=0;
    int sum=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" "<<n/i<<endl;
            count++;
            sum=sum+i;
            if(n/i!=i){
                sum=sum+n/i;
                count++;
            }
        }
    }
    cout<<endl<<count<<" "<<sum<<endl;
}

int main(){
    int n;
    cin>>n;
    divisors(n);
}
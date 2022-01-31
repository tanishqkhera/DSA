#include <bits/stdc++.h>
using namespace std;
const int N=1e7+10;

vector <bool> isPrime(N,1);
vector<int> lp(N,0),hp(N,0);

int main(){
    isPrime[0]=false;
    isPrime[1]=false;
    for(int i=2;i<N;i++){
        if(isPrime[i]==true){
            lp[i]=i;
            hp[i]=i;
            for(int j=2*i;j<N;j=j+i){
                isPrime[j]=false;
                hp[j]=i;
                if(lp[j]==0){
                    lp[j]=i;
                }
            }
        }
    }

    int num;
    unordered_map<int,int>prime_factors;
    cin>>num;
    while(num>1){
        int prime_factor=hp[num];
        while(num%prime_factor==0){
            prime_factors[prime_factor]++;
            num=num/prime_factor;
        }
    }

    for(auto i:prime_factors){
        cout<<i.first<<" "<<i.second<<endl;
    }



}
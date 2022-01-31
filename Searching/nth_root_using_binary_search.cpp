#include <bits/stdc++.h>
using namespace std;

double power(double n,int pow){
    double result=1;
    while(pow>0){
        if(pow%2==1){
            result=result*n;
        }
        n=n*n;
        pow=pow>>1;
    }
    return result;

}

double calculateRoot(int n,int pow){
    const double pres=1e-10;
    double low=1;
    double high=n;
    while(high-low>pres){
        double mid=(high+low)/2;
        if(power(mid,pow)<n){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    return low;
}

int main(){
    int n;
    int pow;
    cin>>n>>pow;
    cout<<setprecision(10)<<calculateRoot(n,pow)<<endl;

}
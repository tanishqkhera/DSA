#include <bits/stdc++.h>
using namespace std;

float fsqrt(float n){
    long i;
    float half = n * 0.5f;
    i=*(long*)&n;
    i=0x5F3759DF - (i>>1);
    n= *(float*) &i;
    n=n*(1.5f-(half*n*n));
    n=n*(1.5f-(half*n*n));

    return n;
}

int main(){
    cout<<(1/sqrt(2.0F))<<endl;
    cout<<fsqrt(2.0F);
}
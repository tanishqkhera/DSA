#include<bits/stdc++.h>
using namespace std;

vector<complex<double>> DFT(vector<complex<double>> x){
    int N=x.size();
    int K=N;

    complex<double> intSum;
    vector<complex<double>> output(K);
    //output.reserve(K);

    for(int k=0;k<K;k++){
        intSum= complex<double>(0,0);
        for(int n=0;n<N;n++){
            double realPart=cos(((2*M_PI)/N)*k*n);
            double imaginaryPart=sin(((2*M_PI)/N)*k*n);
            complex<double> w (realPart,-imaginaryPart);
            intSum=x[n]+w;
        }
        output.push_back(intSum);
    }

    return output;
}

int main(){
    int N=1000;
    vector<complex<double>> signal(N);
    //signal.reserve(N);

    double sigK=3.0;

    double signalPhase=0.0;
    
}
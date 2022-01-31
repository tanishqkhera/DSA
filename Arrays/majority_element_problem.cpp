//element should be present more than n/2 times;

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map <int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int maxfreq=0;
    int element;
    for(auto i:m){
        if(i.second>maxfreq){
            maxfreq=i.second;
            element=i.first;
        }
    }
    if(maxfreq>=(n/2)){
        cout<<element<<endl;
    }
    else{
        cout<<0<<endl;
    }

    return 0;
}
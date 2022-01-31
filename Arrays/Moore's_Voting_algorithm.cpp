#include <bits/stdc++.h>
using namespace std;
int majorityElement(int *arr){
    int ansIndex=0;
    int count=1;
    int len=(sizeof(arr)/sizeof(int));
    for(int i=1;i<len;i++){
        if(arr[i]==arr[ansIndex]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            ansIndex=i;
            count=1;
        }
    }
    int element=arr[ansIndex];
    int freq=0;
    for(int i=0;i<len;i++){
        if(arr[i]==element){
            freq++;
        }
    }
    if(freq>(len/2)){
        return element;
    }
    else{
        return -1;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<majorityElement(arr);
}
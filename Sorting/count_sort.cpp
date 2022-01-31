#include<bits/stdc++.h>
using namespace std;

void countSort(int *arr, int size){
    int max=arr[0]; //maximum element
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    int count[max+1]={0}; //count array
    for(int i=0;i<size;i++){
        count[arr[i]]++;
    }

    for(int i=1; i<=max;i++){
        count[i]=count[i]+count[i-1];
    }

    int output[size];
    for(int i=size-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }

    for(int i=0;i<size;i++){
        arr[i]=output[i];
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    countSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
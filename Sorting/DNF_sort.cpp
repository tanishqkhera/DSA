#include <bits/stdc++.h>
using namespace std;
void swap(int *arr,int i,int j){
    arr[i]=arr[i]^arr[j];
    arr[j]=arr[i]^arr[j];
    arr[i]=arr[i]^arr[j];
}
void DNF(int *arr,int n){
    int mid=0;
    int low=0;
    int high =n-1;
    while(mid<=high){
        if(arr[mid]==0){
            low++;
            mid++;
            swap(arr,low,mid);
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            high--;
            swap(arr,mid,high);
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    DNF(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int *arr, int n,int element){
    sort(arr, arr+n);
    int low=0;
    int high=n-1;
    int mid;
    while(high-low>1){
        mid=(high+low)/2;
        if(arr[mid]<element){
            low=mid+1;
        }
        else{
            high=mid;
        }
        if(arr[low]==element){
            return low;
        }
        else if(arr[high]==element){
            return high;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int element;
    cin>>element;
    int pos=binarySearch(arr,n,element);
    if(pos==-1){
        cout<<"Element not found";
    }
    else{
        cout<<pos<<" "<<arr[pos];
    }
}
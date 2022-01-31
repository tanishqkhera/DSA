#include <bits/stdc++.h>
using namespace std;

int linearSearch(int *arr,int n,int element){
    for(int i=0;i<n;i++){
        if(arr[i]==element){
            return i;
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
    int pos=linearSearch(arr,n,element);
    if(pos==-1){
        cout<<"element not found";
    }
    else{
        cout<<pos<<" "<<arr[pos];
    }
}

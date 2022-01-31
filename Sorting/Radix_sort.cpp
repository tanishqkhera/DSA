#include<bits/stdc++.h>
using namespace std;

int getMax(int *arr,int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

void countSort(int* arr,int n,int exp){
    int output[n];
    int count[10]={0};

    for(int i=0;i<n;i++){
        count[(arr[i]/exp)%10]++;
    }

    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }

    for(int i=n-1;i>=0;i--){
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }

    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}

void Radixsort(int *arr, int n){
    int m=getMax(arr,n);

    for(int exp=1;m/exp>1;exp=exp*10){
        countSort(arr,n,exp);
    }
}

void display(int* arr,int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    display(arr,n);
    Radixsort(arr,n);
    display(arr,n);

}
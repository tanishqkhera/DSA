#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int** matrix_mul(int r1,int r2,int c1,int c2,int *a1[c1],int *a2[c2]){
    int **result;
    int sum;
    *result=new int*[r1];
    for(int i=0;i<c2;i++){
        result[i]=new int[c2];
    }
    if(c1==r2){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<r2;k++){
                    sum+=a1[i][k]*a2[k][j];
                    result[i][j]=sum;
                }
            }
        }
        return result;
    }
    else{
        return 0;
    }
}
int main(){
    int r1,c1;
    cin>>r1>>c1;
    int r2,c2;
    cin>>r2>>c2;
    int a1[r1][c1];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>a1[i][j];
        }
    }
    int a2[r2][c2];
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>a2[i][j];
        }
    }

    int res[r1][c2]=matrix_mul(r1,r2,c1,c2,a1,a2);
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }
}
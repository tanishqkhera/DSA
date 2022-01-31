#include <bits/stdc++.h>
using namespace std;
int main(){
    int v,e;
    cin>>v>>e;
    int Wgraph[v+1][v+1];
    for(int i=0;i<=v;i++){
        for(int j=0;j<=v;j++){
            Wgraph[i][j]=0;
        }
    }

    for(int i=0;i<e;i++){
        int v1,v2,w;
        cin>>v1>>v2>>w;
        Wgraph[v1][v2]=w;
        Wgraph[v2][v1]=w;
    }

    for(int i=0;i<=v;i++){
        for(int j=0;j<=v;j++){
            cout<<Wgraph[i][j]<<" ";
        }
        cout<<endl;
    }
}
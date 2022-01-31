#include<bits/stdc++.h>
using namespace std;

int main(){
    int v,e;
    cin>>v>>e;
    vector<pair<int,int>> Wgraph[v+1];
    for(int i=0;i<e;i++){
        int v1,v2,w;
        cin>>v1>>v2>>w;
        Wgraph[v1].push_back({v2,w});
        Wgraph[v2].push_back({v1,w});
    }
}
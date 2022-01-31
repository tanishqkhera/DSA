#include<bits/stdc++.h>
using namespace std;
int main(){
    int v,e;
    cin>>v>>e;
    vector<int> graph[v+1];
    for(int i=0;i<e;i++){
        int v1,v2;
        cin>>v1>>v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }

    for(int i=0;i<=v;i++){
        for(auto j:graph[i]){
            cout<<i<<" "<<j<<endl;
        }

    }
}
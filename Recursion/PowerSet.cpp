#include<bits/stdc++.h>
using namespace std;
void PowerSet(string s,int i=0,string cur=""){
    int n =s.length();
    if(i==n){
        cout<<cur<<" ";
        return;
    }
    PowerSet(s,i+1,cur+s[i]);
    PowerSet(s,i+1,cur);
}
int main(){
    string s;
    cin>>s;
    PowerSet(s);
}
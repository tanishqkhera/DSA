#include<bits/stdc++.h>
using namespace std;
string swap(string s,int i, int j){
    s[i]=s[i]^s[j];
    s[j]=s[i]^s[j];
    s[i]=s[i]^s[j];

    return s;
}
void permutation(string s,int l,int r){
    if(l==r){
        cout<<s<<" ";
        return;
    }
    for(int i=l;i<=r;i++){
        s=swap(s,l,i);
        permutation(s,l+1,r);
        s=swap(s,l,i);
    }
}
int main(){
    string s;
    cin>>s;
    int n=s.length()-1;
    permutation(s,0,n);
    //cout<<endl<<swap(s,0,n);
}
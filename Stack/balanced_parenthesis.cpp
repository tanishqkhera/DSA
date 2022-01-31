#include <bits/stdc++.h>
using namespace std;

bool balancedParenthesis(string s){
    stack<char> st;
    int flag=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()!='('){
                flag=1;
            }
            else{
                st.pop();
            }
        }
        else if(s[i]==']'){
            if(st.top()!='['){
                flag=1;
            }
            else{
                st.pop();
            }
        }
        else if(s[i]=='}'){
            if(st.top()!='{'){
                flag=1;
            }
            else{
                st.pop();
            }
        }
    }

    if(flag==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s="({[()]})";
    if(balancedParenthesis(s)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
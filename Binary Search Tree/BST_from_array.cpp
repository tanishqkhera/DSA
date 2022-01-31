//for some reason its not working in vscode but works in online compiler

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node* right;
    Node(int val){
        data=val;
        left==NULL;
        right==NULL;
    }
};

Node* insertBST(Node* root, int val){
    if(root==NULL){
        return new Node(val);
    }

    if(val<root->data){
        root->left=insertBST(root->left,val);
    }

    else{
        root->right=insertBST(root->right,val);
    }

    return root;
}

void printInorder(Node* root){
    if(root==NULL){
        return;
    }
    printInorder(root->left);
    cout<<root->data<<" ";
    printInorder(root->right);
}

int main(){
    Node* root=NULL;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    root=insertBST(root,arr[0]);
    for(int i=1;i<n;i++){
        insertBST(root,arr[i]);
    }

    printInorder(root);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

int search(int inorder[],int start,int end,int val){
    for(int i=start;i<=end;i++){
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int postorder[],int inorder[], int start, int end,int size){
    static int index=size;

    if(start>end){
        return NULL;
    }
    int val=postorder[index];
    index--;
    Node* curr=new Node(val);
    if(start==end){
        return curr;
    }

    int pos=search(inorder,start,end,val);
    curr->right=buildTree(postorder,inorder,pos+1,end,size);
    curr->left=buildTree(postorder,inorder,start,pos-1,size);

    return curr;

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
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};
    Node* root=buildTree(postorder,inorder,0,4,4);
    printInorder(root);
    return 0;
}

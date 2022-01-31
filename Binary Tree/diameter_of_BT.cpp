#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

int calcHeight(Node* root){
    if(root==NULL){
        return 0;
    }
    int lheight=calcHeight(root->left);
    int rheight=calcHeight(root->right);

    return max(lheight,rheight)+1;
}

int calcDiameter(Node* root){
    if(root==NULL){
        return 0;
    }

    int lheight=calcHeight(root->left);
    int rheight=calcHeight(root->right);

    int currDiameter=lheight+rheight+1;
    int lDiameter=calcDiameter(root->left);
    int rDiameter=calcDiameter(root->right);

    return max(max(lDiameter,rDiameter),currDiameter);
}

int calcDiameterfast(Node* root,int* height){
    if(root==NULL){
        *height=0;
        return 0;
    }
    int lh=0,rh=0;
    int lDia=calcDiameterfast(root->left,&lh);
    int rDia=calcDiameterfast(root->right,&rh);
    int currDia=lh+rh+1;

    *height=max(lh,rh)+1;
    return(max(max(currDia,lDia),rDia));
}

int main(){
    Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<calcDiameter(root)<<endl;
    int height=0;
    cout<<calcDiameterfast(root,&height)<<endl;
}
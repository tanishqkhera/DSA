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

void printSubTreeNodes(Node* root, int k){
    if(root==NULL|| k<0){
        return;
    }
    if(k==0){
        cout<<root->data<<" ";
        return;
    }
    printSubTreeNodes(root->left,k-1);
    printSubTreeNodes(root->right,k-1);
}

int printNodesAtK(Node* root, Node* target, int k){
    if(root==NULL){
        return -1;
    }

    if(root==target){
        printSubTreeNodes(target,k);
        return 0;
    }

    int DistanceL=printNodesAtK(root->left,target,k);
    if(DistanceL!=-1){
        if(DistanceL+1==k){
            cout<<root->data<<" ";
        }
        else{
            printSubTreeNodes(root->right,k-DistanceL-2);
        }
        return 1+DistanceL;
    }

    int DistanceR=printNodesAtK(root->right,target,k);
    if(DistanceR!=-1){
        if(DistanceR+1==k){
            cout<<root->data<<" ";
        }
        else{
            printSubTreeNodes(root->left,k-DistanceR-2);
        }
        return 1+DistanceR;
    }

    return -1;
}

int main(){
    Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);

    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    printNodesAtK(root,root->left,1);
    return 0;
}
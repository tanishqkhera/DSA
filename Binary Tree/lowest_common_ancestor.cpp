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

bool getPath(Node* root,int key, vector<int> &path){
    if(root==NULL){
        return false;
    }

    path.push_back(root->data);
    if(root->data==key){
        return true;
    }
    if(getPath(root->left,key,path)||getPath(root->right,key,path)){
        return true;
    }
    path.pop_back();
    return false;

}

int LCA(Node* root, int n1, int n2){
    vector<int>path1, path2;
    if(!getPath(root,n1,path1) || !getPath(root,n2,path2)){
        return -1;
    }
    int path_change;
    for(path_change=0;path_change<path1.size()&& path2.size();path_change++){
        if(path1[path_change]!=path2[path_change]){
            break;
        }
    }

    return path1[path_change-1];
}

Node* optimisedLCA(Node* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }
    Node* leftLCA=optimisedLCA(root->left,n1,n2);
    Node* rightLCA=optimisedLCA(root->right,n1,n2);

    if(leftLCA&&rightLCA){
        return root;
    }
    if(leftLCA!=NULL){
        return leftLCA;
    }
    return rightLCA;
}

int main(){
    Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);

    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<LCA(root,6,7)<<endl;
    Node* lca=optimisedLCA(root,6,7);
    cout<<lca->data<<endl;
    return 0;
}
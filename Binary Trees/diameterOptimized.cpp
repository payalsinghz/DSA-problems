#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
static int idx=-1;
Node* buildTree(vector<int>nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }
    Node* currNode=new Node(nodes[idx]);
    currNode->left=buildTree(nodes);
    currNode->right=buildTree(nodes);
    return currNode;  
}
int height(Node* root){
    if(root==NULL){
        return 0;
    }else{
        return max(height(root->left),height(root->right))+1;
    }
}
pair<int,int>diameter(Node* root){
    if(root==NULL){
        return make_pair(0,0);
    }
    pair<int,int>leftInfo=diameter(root->left);
    pair<int,int>rightInfo=diameter(root->right);
    int currDiameter=leftInfo.second+rightInfo.second+1;
    int finalDiameter=max(currDiameter,max(leftInfo.first,rightInfo.first));
    int finalHeight=max(leftInfo.second, rightInfo.second)+1;
    return make_pair(finalDiameter,finalHeight);
}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root= buildTree(nodes);
    cout<<diameter(root).first;
    return 0;
}
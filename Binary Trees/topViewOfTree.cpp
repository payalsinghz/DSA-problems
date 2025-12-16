#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<string>
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
void topView(Node*root){
    queue<pair<Node*,int>>q;
    map<int,int>m;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<Node*,int>p=q.front();
        q.pop();
        Node* n=p.first;
        int HD=p.second;
        if(!m.count(HD)){
            m[HD]=n->data;
        }
        if(n->left!=NULL){
            pair<Node*,int>left=make_pair(n->left,HD-1);
            q.push(left);
        }
        if(n->right!=NULL){
            pair<Node*,int>right=make_pair(n->right,HD+1);
            q.push(right);
        }
    }
    for(auto it:m){
        cout<<it.second<<" ";
    }cout<<endl;
}
int main(){
    vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root= buildTree(nodes);
    topView(root);
    return 0;
}
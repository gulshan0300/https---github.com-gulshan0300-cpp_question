#include<iostream>
using namespace std;
#include<vector>
#include<map>

class node{
public:
    int data;
    node*left;
    node*right;

    node(int d){
    data=d;
    left=right=NULL;
    }
};

node* buildtree(node*root){
    int n;
    cin>>n;
    if(n==-1){
        return NULL;
    }
    root=new node(n);
    root->left=buildtree(root->left);
    root->right=buildtree(root->right);
    return root;

}

void verticalprint(node*root,int d,map<int,vector<int>> &m){
    if(root==NULL){
        return ;
    }
    m[d].push_back(root->data);

    verticalprint(root->left,d-1,m);
    verticalprint(root->right,d+1,m);
    return ;

}

int main(){
    map<int,vector<int>> m;
    node*root=buildtree(root);
    int d=0;
    verticalprint(root,d,m);
    for(auto s:m){
       // cout<<"key "<<s.first<<" ";
        for(int x:s.second){
            cout<<x<<",";
        }
        cout<<endl;
    }
        return 0;
}

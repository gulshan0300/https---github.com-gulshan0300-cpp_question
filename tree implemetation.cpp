#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*left;
    node*right;

    node(int d){
    this->data=d;
    this->left=NULL;
    this->right=NULL;
    }
};

node* mytree(node*root){
int d;

//cout<<"Enter the data"<<endl;

cin>>d;
root= new node(d);
if(d==-1){
    return NULL;

}
//root= new node(d);

//cout<<"Enter for left"<<endl;

root->left=mytree(root->left);

//cout<<"Enter for right"<<endl;
root->right= mytree(root->right);

return root;
}

void print(node*root){
if(root==NULL){
    return ;
}
cout<<root->data<<" ";

print(root->left);
print(root->right);

}

void print_inorder(node*root){
if(root==NULL){
return ;
}
print_inorder(root->left);

cout<<root->data<<" ";

print_inorder(root->right);

}

void print_post(node*root){
if(root==NULL){
    return ;
}
print_post(root->left);

print_post(root->right);

cout<<root->data<<" ";


}
int height(node*root){
if(root ==NULL){
    return 0;
}

int lh=height(root->left);

int rh=height(root->right);

return max(lh,rh)+1;
}
int main(){

node*root= mytree(root);

print_post(root);
cout<<endl;
cout<<height(root)<<endl;
return 0;
}

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

node* buildmytree(node*root){
cout<<"Enter the data: "<<endl;
int n;
cin>>n;
root=new node(n);

if(n==-1){
    return NULL;

}
cout<<"Enter the data for left node of: "<<n<<endl;
root->left= buildmytree(root->left);
cout<<"Enter the data for right nofr of: "<<n<<endl;
root->right=buildmytree(root->right);

return root;

}

void print(node*root){
if(root ==NULL){
    return ;
}

cout<<root->data<<" ";
print(root->left);
print(root->right);
}

int main(){
node*root=NULL;

root = buildmytree(root);

print(root);

return 0;
}

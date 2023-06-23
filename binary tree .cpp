#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node*right;
    node*left;

    node(int d){
    data=d;
    left=NULL;
    right=NULL;

    }
};

node* mytree(node*root){
int n;
cin>>n;
root=new node(n);
if(n==-1){
    return NULL;
}
root->left=mytree(root->left);
root->right=mytree(root->right);

return root;
}

void print(node*root){
if(root==NULL){
    return;
}
cout<<root->data<<" ";
print(root->left);
print(root->right);
}

void inorder(node*root){
if(root==NULL){
    return ;
}
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

int height(node*root){
if(root==NULL){
    return 0;
}
int ls=height(root->left);
int rs=height(root->right);

return max(ls,rs)+1;

}

void printkthlevel(node*root,int k){
if(root==NULL){
    return ;
}
if(k==1){
    cout<<root->data<<" ";
    return;
}
printkthlevel(root->left,k-1);
printkthlevel(root->right,k-1);
return;
}

void printlevelorder(node*root){
int h=height(root);
for(int i=1;i<=h;i++){
    printkthlevel(root,i);
    cout<<endl;
}

}

void bfstraversal(node*root){
queue<node*>q;
q.push(root);
q.push(NULL);
while(!q.empty()){
    node*temp=q.front();
    if(temp==NULL){
        cout<<endl;
        q.pop();
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
    cout<<temp->data<<",";
    q.pop();
    if(temp->left!=NULL){
        q.push(temp->left);
    }
    if(temp->right!=NULL){
        q.push(temp->right);
    }
    }
}
}

int count(node*root){
if(root==NULL){
    return 0;
}
return 1+count(root->left)+count(root->right);
}

int sum(node*root){

if(root==NULL){
    return 0;
}
return root->data+sum(root->left)+sum(root->right);

}
int diameter(node*root){
if(root==NULL){
    return 0;
}
int lh=height(root->left);
int rh=height(root->right);
int opt1=lh+rh;
int opt2=diameter(root->left);
int opt3=diameter(root->right);
return max(opt1,max(opt2,opt3));
}

class paire{
public:
    int height;
    int diameter;
};
 paire fastdiameter(node*root){
paire p;
 if(root== NULL){
    p.height=p.diameter=0;
    return p;
 }
 paire left=fastdiameter(root->left);
 paire right= fastdiameter(root->right);
 p.height=max(left.height,right.height)+1;
 p.diameter=max(left.height+right.height, max(left.diameter,right.diameter));
 return p;
}

int changesum(node*root){
if(root==NULL){
    return 0;
}
if(root->left==NULL and root->right==NULL){
    return root->data;
}
int left=changesum(root->left);
int right=changesum(root->right);
int temp=root->data;
root->data=left+right;
return temp+root->data;
}

bool isbalance(node*root){

if(root->left==NULL and root->right==NULL){
    return true;
}
int hl=height(root->left);
int hr=height(root->right);
if(abs(hl-hr)<=1 and isbalance(root->left) and isbalance(root->right) ){
    return true;
}

    return false;

}

int main(){
node*root=NULL;
root=mytree(root);

//inorder(root);

//cout<<"height: "<<height(root)<<endl;
//printkthlevel(root,2);
//printlevelorder(root);
bfstraversal(root);

/*cout<<"count no "<<count(root)<<endl;
cout<<"sum of "<<sum(root)<<endl;
//cout<<"diameter "<<diameter(root)<<endl;
paire p=fastdiameter(root);

cout<<"height "<<p.height<<endl;
cout<<"diameter "<<p.diameter<<endl;*/

//changesum(root);

//cout<<endl;
//bfstraversal(root);
if(isbalance(root)){
    cout<<"tree is balance"<<endl;
}
else{
    cout<<"tree is not balance"<<endl;
}

return 0;
}

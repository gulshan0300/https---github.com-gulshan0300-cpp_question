#include<iostream>
#include<climits>
using namespace std;
#include<queue>
#include<vector>

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
node* insertinbst(node*root,int data){
if(root==NULL){
    root=new node(data);
    return root;
}
if(data<=root->data){
    root->left=insertinbst(root->left,data);
}
else{
    root->right=insertinbst(root->right,data);
}
return root;
}

node* build(node*root){
int d;
cin>>d;
while(d!=-1){
   root= insertinbst(root,d);
    cin>>d;
}
return root;
}
void bsf(node*root){
queue<node*> q;

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
        cout<<temp->data<<" ";
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

void inorder(node*root){
if(root==NULL){
    return ;
}
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}

bool bst_search(node*root,int key){
if(root==NULL ){
    return false;
}
if(root->data==key){
    return true;
}
if(key<root->data){
   bool left= bst_search(root->left,key);
}
else{
   bool right= bst_search(root->right,key);
}
}

node* delete_in_bst(node*root,int data){
if(root==NULL){
    return root;
}
if(data<root->data){
    root->left=delete_in_bst(root->left,data);
    return root;
}
else if(data==root->data){
    //1 case
    if(root->left==NULL and root->right==NULL){
        delete root;
        return NULL;
    }
    if(root->left!=NULL and root->right==NULL){
        node*temp=root->left;
        delete root;
        return temp;
    }
    if(root->left==NULL and root->right!=NULL){
        node*temp=root->right;
        delete root;
        return temp;
    }
    if(root->left!=NULL and root->right!=NULL){
        node*replace=root->right;

        while(replace->left!=NULL){
            replace=replace->left;
        }
        root->data=replace->data;
        root->right=delete_in_bst(root->right,replace->data);
        return root;
    }

}
else{
        root->right=delete_in_bst(root->right,data);
        return root;
    }
}

void inorderbst(node*root,vector<int> &v){

  if(root==NULL){
    return ;
  }

  inorderbst(root->left,v);
  v.push_back(root->data);
  inorderbst(root->right,v);

}

bool isbst(node*root){
vector<int> v;
inorderbst(root,v);
int i=0;
int j=1;
while(j<v.size()){
    if(v[i]>v[j]){
        return false;
    }
    //cout<<v[i]<<" ";
    i++;
    j++;
}
return true;
}

bool isbstvalid(node*root,int min,int max){
if(root==NULL){
    return true;
}
if(root->data>=min and root->data<=max){


bool left=isbstvalid(root->left,min,root->data);
bool right=isbstvalid(root->right,root->data,max);
return left and right;
}
else{
    return false;
}
}

int main(){
node*root=NULL;
root=build(root);
 bsf(root);
 cout<<endl;
 inorder(root);
 cout<<endl;
 /*bool tru=bst_search(root,110);
 if(tru){
    cout<<"present "<<endl;
 }
 else{
    cout<<"not present"<<endl;
 }*/
 //root=delete_in_bst(root,20);
 //bsf(root);
 //cout<<endl;
 //inorder(root);
 if(isbstvalid(root,INT_MIN,INT_MAX)){
    cout<<"bst is validate"<<endl;
 }
 else{
    cout<<"bst is not valid"<<endl;
 }
 vector<int> v1;
 inorderbst(root,v1);
 for(int i=0;i<v1.size();i++){
    cout<<v1[i]<<",";
 }
return 0;
}


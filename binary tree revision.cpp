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
    right=NULL;
    left=NULL;
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

void bsftraverse(node*root){
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

int height(node*root){
if(root==NULL){
    return 0;

}
int lh=height(root->left);
int rh=height(root->right);
return max(lh,rh)+1;
}

bool balance(node*root){
if(root==NULL){
    return true;
}
if(root->left==NULL and root->right==NULL){
    return true;
}
int lh=height(root->left);
int rh=height(root->right);
if(abs(lh-rh)<=1 and balance(root->left) and balance(root->right) ){
    return true;
}
else{
    return false;
}
}

node* buildtree(int*arr,int s,int e){
if(s>e){
    return NULL;
}
int mid= (s+e)/2;
node*root= new node(arr[mid]);
root->left=buildtree(arr,s,mid-1);
root->right=buildtree(arr,mid+1,e);

return root;
}

node* buildfromtraverse(int*in,int*pre,int s,int e){
static int i=0;
if(s>e){
    return NULL;
}
    node*root=new node(pre[i]);
    int index=-1;
    for(int j=0;j<=e;j++){
        if(in[j]==pre[i]){
            index=j;
            break;
        }
    }
    i++;

    root->left=buildfromtraverse(in,pre,s,index-1);
    root->right=buildfromtraverse(in,pre,index+1,e);
    return root;

}

void printrightview(node*root,int level,int &maxlevel){
if(root==NULL){
    return ;
}
if(maxlevel<level){
    cout<<root->data<<" ";
    maxlevel=level;
}
printrightview(root->right,level+1,maxlevel);
printrightview(root->left,level+1,maxlevel);

}

//print kth level of tree
void printkthlevel(node*root,int k){
if(root==NULL){
    return;
}
if(k==0){
    cout<<root->data<<" ";
    return;
}
printkthlevel(root->left,k-1);
printkthlevel(root->right,k-1);
}

int printktdistance(node*root,node*target,int k){
if(root==NULL){
    return -1;
}
if(root==target){
    printkthlevel(target,k);
    return 0;
}
int dl=printktdistance(root->left,target,k);
if(dl!=-1){
    if(dl+1==k){
        cout<<root->data<<" ";
    }
    else{
        printkthlevel(root->right,k-2-dl);
    }
    return dl+1;
}
int dr=printktdistance(root->right,target,k);

if(dr!=-1){
    if(dr+1==k){
        cout<<root->data<<" ";
    }
    else{
        printkthlevel(root->left,k-2-dr);
    }
    return dr+1;
}
return -1;
}

node*lca(node*root,int a,int b){
if(root==NULL){
    return NULL;

}
if(root->data==a or root->data==b){
    return root;
}
node*left=lca(root->left,a,b);
node*right=lca(root->right,a,b);
if(left!=NULL and right!=NULL){
    return root;
}
if(left!=NULL){
    return left;
}
return right;

}

int main(){
    node*root=NULL;
   /* root=mytree(root);
    bsftraverse(root);
   // cout<<"height "<<height(root);

    if(balance(root)){
        cout<<"balance "<<endl;
    }
    else{
        cout<<"not balance"<<endl;
    }*/
    /*int pre[]={1,2,3,4,8,5,6,7};
    int in[]={3,2,8,4,1,6,7,5};

    int n=sizeof(in)/sizeof(int);

    //int n=sizeof(arr)/sizeof(int);
    root=buildfromtraverse(in,pre,0,n-1);*/
   /* int maxlevel=-1;
    root=mytree(root);
    bsftraverse(root);
    cout<<endl;
    printrightview(root,0,maxlevel);
    return 0;*/

    root=mytree(root);
    bsftraverse(root);
    //node*target=root->left;
   // printktdistance(root,target,3);

   node*lc=lca(root,10,14);
   cout<<lc->data<<endl;
    return 0;
}

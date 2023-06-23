#include<iostream>
using namespace std;

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
template<typename T>
class myqueue{
public:
    node*front;
    node*rear;
    int cs;


    myqueue(){
    front=rear=NULL;
    cs=0;
    }

    void push(T d){

    if(front==NULL){
        front=d;
        //front->right=front->left=NULL;
        rear=front;
        rear->left=rear->right=NULL;
        cs++;
        return;
    }
    node*temp=d;
    rear->right=temp;
    rear->left=NULL;
    rear=temp;
    cs++;
    }

    void pop(){
    if(cs!=0){
        node*temp=front;
        front=front->right;
        temp->right=temp->left=NULL;
        delete temp;
        cs--;
    }
    }
    bool isempty(){
    return cs=0;
    }

    T front1(){
    if(!isempty()){
        return front;
    }
    }


};

 void levelorder(node*root){
 int n;
 cin>>n;
 myqueue<node*> q;
 root=new node(n);
 q.push(root);
 while(!q.isempty()){
    node*temp=q.front1();
    q.pop();
    int c1,c2;
    cin>>c1>>c2;
    if(c1!=-1){
        temp->left=new node(c1);
        q.push(temp->left);
    }
    if(c2!=-1){
        temp->right=new node(c2);
        q.push(temp->right);
    }

 }

 }

int main(){
//myqueue<node*> q;
node*root=NULL;
levelorder(root);
//q.push(root);
//cout<<q.front1()->data<<endl;
return 0;

}


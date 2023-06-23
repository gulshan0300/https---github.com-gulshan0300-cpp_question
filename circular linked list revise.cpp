#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;

    node(int d){
    this->data=d;
    this->next=NULL;
    }
};

void insertat(node*&head,int d){
if(head==NULL){
    node*n=new node(d);
    head=n;
    n->next=head;
    return ;
}
node*tail=head;
while(tail->next!=head){
    tail=tail->next;
}
node*n=new node(d);
n->next=tail->next;
tail->next=n;

}

void print(node*head){
if(head==NULL){
    return;
}
node*temp=head;
while(temp->next!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<temp->data;
cout<<endl;
}

int main(){
node*head=NULL;
insertat(head,1);
insertat(head,2);
insertat(head,3);
insertat(head,4);
insertat(head,5);

print(head);
return 0;
}

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
} ;
void insertathead(node*&head,int d){
if(head==NULL){
    head=new node(d);
    return;
}
node*n=new node(d);
n->next=head;
head=n;
}
void print(node*head){
while(head!=NULL){
    cout<<head->data<<"->";
    head=head->next;
}
}

int main(){
node*head=NULL;
insertathead(head,1);
insertathead(head,2);
insertathead(head,3);
insertathead(head,4);
print(head);
return 0;
}

#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;

    node(int d){
    data=d;
    next=NULL;
    }
};

void insertathead(node*&head,int d){
if(head==NULL){
    node*n=new node(d);
    n->next=n;
    head=n;
    //return ;
}
node*temp=head;
while(temp->next!=head){
    temp=temp->next;
}
node*n=new node(d);
n->next=head;
temp->next=n;
head=n;
}

void print(node*start){
if(start==NULL){
    return ;
}
node*head=start;
while(head->next!=start){
    cout<<head->data<<"->";
    head=head->next;
}
cout<<endl;

}

int main(){
node*head=NULL;

insertathead(head,5);
insertathead(head,4);
insertathead(head,3);
insertathead(head,2);
insertathead(head,1);

print(head);

return 0;
}

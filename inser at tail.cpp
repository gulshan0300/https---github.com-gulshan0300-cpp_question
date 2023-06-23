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
void insertattail(node*&head, node*&tail,int d){
if(head==NULL){
    head=new node(d);
    return ;

}
tail=head;
while(tail->next!=NULL){
    tail=tail->next;
}
tail->next=new node(d);
tail=tail->next;
return ;
}
void print(node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }

}
int main(){
node*tail=NULL;
node*head=NULL;
insertattail(head,tail,1);
insertattail(head,tail,2);
insertattail(head,tail,3);
insertattail(head,tail,4);
print(head);
return 0;
}

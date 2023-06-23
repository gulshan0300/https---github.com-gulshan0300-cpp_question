#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;
    node*pre;

    node(int d){
    this->data=d;
    this->next=NULL;
    this->pre=NULL;

    }
};

void insertathead(node* &head,node* &tail,int d){
    if(head==NULL){
        head=new node(d);
        tail=head;
        return ;
    }
    node*n= new node(d);
    n->next=head;
    head->pre=n;
    head=n;


}
void print(node*head,node*tail){
     if(head==NULL){
        return ;
     }
     while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
     }
     cout<<endl;
}

void insertatmid(node*&head,node*&tail,int k,int d){
    if(head==NULL){
        insertathead(head,tail,d);
        return ;
    }
    node*n=new node(d);
    int i=1;
    node*temp=head;
    while(i<=k-2){
        temp=temp->next;
        i++;
    }
    temp->next->pre=n;
    n->next=temp->next;
    n->pre=temp;
    temp->next=n;
}

int main(){
node*head=NULL;
node*tail=NULL;

insertathead(head,tail,5);
insertathead(head,tail,4);
insertathead(head,tail,3);
insertathead(head,tail,2);
insertathead(head,tail,1);

print(head,tail);

insertatmid(head,tail,3,0);


print(head,tail);

return 0;
}

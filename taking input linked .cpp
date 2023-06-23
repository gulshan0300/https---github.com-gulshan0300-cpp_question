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

void insert_at_head(node*&head,int d){
if(head==NULL){
    head=new node(d);
    return ;
}
node*n= new node(d);
n->next=head;
head=n;

}

void print(node*head){
if(head==NULL){
    return;
}
while(head!=NULL){
    cout<<head->data<<"->";
    head=head->next;
}
cout<<endl;
}
void input(node*&head){
int d;
cin>>d;
for(int i=0;i<d;i++){
    int key;
    cin>>key;
    insert_at_head(head,key);
}

}
void deletebetween(node*&head,int p){
if(head==NULL){
    return ;
}
if(head->next==NULL){
    delete head;
    return ;
}
int i=1,j=1;
node*temp=head;
node*pre=head;

while(i<=p-1){
    temp=temp->next;
    i++;
}
while(j<=p-2){
    pre=pre->next;
    j++;
}
pre->next=temp->next;
delete temp;
}

void deleteattail(node*&head){
if(head==NULL){
    return;
}
else if(head->next==NULL){
     head=NULL;
    return ;
}
else{
node*t=head;
while(t!=NULL){
    t=t->next;
}
cout<<"temp ka dta"<<t->data<<endl;
delete t->next;
}
}
void operator<<(ostream&os,node*head){
print(head);

}
void operator>>(istream&is,node*&head){
input(head);
}

void reverse1(node*&head){
node*c=head;
node*p=NULL;
node*n;
while(c!=NULL){
    // save the next node
    n=c->next;
    c->next=p;
    //update the value of current
    p=c;
    c=n;

}
 head=p;
}
node*midpoint(node*&head){
if(head==NULL or head->next==NULL){
    return head;

}
node*slow=head;
node*fast=head->next;
while(fast!=NULL and fast->next!=NULL){
    fast=fast->next->next;
    slow=slow->next;
}
return slow;
}

node* kthnode(node*&head,int k){
if(head==NULL or head->next==NULL){
    return head;

}
node*fast=head;
node*slow=head;
int i=1;
while(i<=k){
    fast=fast->next;
    i++;
}
while(fast!=NULL){
    fast=fast->next;
    slow=slow->next;
}
return slow;
}

int main(){
node*head=NULL;
cin>>head;
//input(head);


cout<<head;
//reverse1(head);

node*n = kthnode(head,3);
cout<<"data "<<n->data<<endl;



//cout<<head;
//print(head);

//deletebetween(head,3);
//deleteattail(head);

//print(head);

return 0 ;

}

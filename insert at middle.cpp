#include<iostream>
#include"input.txt"
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
void insertathead(node*&head,int d){
    if(head==NULL){
        head=new node(d);
        return;
    }
    node*n=new node(d);
    n->next=head;
    head=n;
}
void insertattail(node*&head,node*&tail,int d){
if(head==NULL){
    head=new node(d);
    return;
}
tail=head;
while(tail->next!=NULL){
    tail=tail->next;
}
tail->next=new node(d);
tail=tail->next;
}
int length(node*head){
int cnt=0;
while(head!=NULL){
    cnt++;
    head=head->next;
}
return cnt;
}
void insertatmiddle(node*&head,node*&tail,int p,int d){
//corner case
if(head==NULL || p==0){
    insertathead(head,d);
}
else if(p>length(head)){
    insertattail(head,tail,d);
}
else{
        int jump=1;
    node*temp=head;
    while(jump<=p-1){
        temp=temp->next;
        jump++;
    }
    node*newn=new node(d);
    newn->next=temp->next;
    temp->next=newn;
}

}
void print(node*head){
while(head!=NULL){
    cout<<head->data<<"->";
    head=head->next;
}
cout<<endl;
}
void delethead(node*&head){
if(head==NULL){
    return ;
}
node*temp=head->next;
delete head;
head=temp;
}
bool search_key(node*&head,int key){
node*temp=head;
while(temp!=NULL){
    if(temp->data==key){
        return true;
    }
    temp=temp->next;
}
return false;

}
//recurssive way search
bool search_recurssive(node*&head,int key){
//base condition
if(head==NULL){
    return false;
}
if(head->data==key){
    return true;
}
else{
    search_recurssive(head->next,key);
}
}


node* take_input(){
int d;
//cin>>d;
node*head=NULL;
while(cin>>d){
   // int k;
   // cin>>k;
    insertathead(head,d);

}
return head;
}


int main(){
    node*head=take_input();
    print(head);


    /*
node*head=NULL;
node*tail=NULL;
insertathead(head,6);
insertathead(head,4);
insertathead(head,3);
insertathead(head,2);
insertathead(head,1);
//delethead(head);
//print(head);
insertatmiddle(head,tail,4,5);
//print(head);
insertattail(head,tail,7);
print(head);
int key;
cin>>key;
if(search_recurssive(head,key)){
    cout<<"key is found";
}
else{
    cout<<"key is not found";
}*/
return 0;

}

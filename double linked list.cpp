#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*pre;
    node*next;

    node(int d){
    data=d;
    pre=NULL;
    next=NULL;

    }
};

void insertat_head(node*&head,int d){
if(head==NULL){
    head = new node(d);
    return ;
}
node*n=new node(d);
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

node* take_input(node*&head){
int n;
cin>>n;
for(int i=0;i<n;i++){
    int no;
    cin>>no;
    insertat_head(head,no);
}
return head;
}

void insert_between(node*&head,int k,int d){
if(k==0){
    insertat_head(head,d);
    return ;
}
node*temp=head;
int i=1;
while(i<k-1){
    temp=temp->next;
    i++;
}
node*n=new node(d);
n->next=temp->next;
temp->next->pre=n;
temp->next=n;
n->pre=temp;

}

int main(){
node*head=NULL;

/*insertat_head(head,5);
insertat_head(head,4);
insertat_head(head,3);
insertat_head(head,2);
insertat_head(head,1);*/

head=take_input(head);
cout<<"befor insertion"<<endl;
print(head);

 insert_between(head,3,6);

 cout<<"after insertion"<<endl;

 print(head);

return 0;
}

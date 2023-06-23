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

void insertattail(node*&head,node*&tail,int d){
		//node*tail=NULL;
	if(head==NULL){
		head=new node(d);
		tail=head;
		return ;
	}
	node*n=new node(d);
	tail->next=n;
	tail=n;

}

node* take_input(node*&head ,node*&tail){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int no;
		cin>>no;
		insertattail(head,tail,no);
	}
	return head;
}

void print(node*head){
	if(head==NULL){
		return ;
	}
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;
}


int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		node*head1=NULL;
		node*head2=NULL;
		node*tail=NULL;
		node*head=take_input(head1,tail);

		print(head);

	}
	return 0;
}

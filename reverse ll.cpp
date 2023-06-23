#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node*next;
	node*pre;

	node(int d){
		data=d;
		next=NULL;
		pre=NULL;
	}
};

void insertattail(node*&head,node*&tail,int d){
	if(head==NULL){
		head=new node(d);
		tail=head;
		return ;
	}
	node*n=new node(d);
	tail->next=n;
	n->pre=tail;
	tail=n;

}

node* take_input(node*&head,node*&tail){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int no;
		cin>>no;
		insertattail(head,tail,no);
	}
	return head;
}

node* reverselist(node*&head,node*&tail){
	if(head==NULL || head->next==NULL){
		return head;
	}
	node*temp=NULL;
	node*current=head;
	while(current!=NULL){
		temp=current->next;
		current->next=current->pre;
		current->pre=temp;
		current=temp;
		//cout<<"chal raha hu mai"<<endl;
	}

	current= head;
	head=tail;
	tail=current;
	return head;
}

void print(node*head){
	if(head==NULL){
		return;
	}
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	cout<<endl;

}

node* reverse_range(node*&head,node*&tail,int k){
node*temphead=head;
node*temp=NULL;
node*temptail=NULL;
while(temphead!=NULL){
    temp=temphead;
    int i=1;
    while(i<k){
        temp=temp->next;

       // cout<<temp->data<<endl;
        i++;
    }
    temptail=temp;
    node*newhead=reverselist(temphead,temptail);

    temphead=temptail->next;
}

tail=temptail;
node*temptail2=tail;
while(temptail2!=NULL){
    temptail2=temptail2->pre;

}
head=temptail2;
cout<<"fun ke under"<<endl;
    print(head);
return head;
}

void ll_reverse(node*&head,node*&tail,int k){
node*temp1=head;
while(temp1!=NULL){
    int jump=1;
    node*n=NULL;
    node*temp=temp1;
    while(jump<=k){
        temp->next=n;
        temp->next=temp->pre;
        temp->pre=n;
        temp=n;
        jump++;
        cout<<temp1->data<<endl;

    }

    temp1=temp1->next;
}
}

int main() {
	node*head=NULL;
	node*tail=NULL;
	head=take_input(head,tail);
	int k;
	cin>>k;

	print(head);

	ll_reverse(head,tail,k);

	print(head);



	return 0;
}

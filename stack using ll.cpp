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

class mystack{
    public:
    node*head;
    int size;

    mystack(){
    head=NULL;
    size=0;
    }

    void push(int d){
    if(head==NULL){
        head=new node(d);
        size++;
        return;
    }
    node*n=new node(d);
    n->next=head;
    head=n;
    size++;
    }

    void pop(){
    if(head==NULL){
        return ;
    }
    node*temp=head;
    head=head->next;
    delete temp;
    }

    int sizeofstack(){
    return size;
    }

    int top(){
    return head->data;
    }

    void print(){
    if(head==NULL){
        return ;
    }
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    }

};

int main(){
mystack s;
s.push(12);
s.push(13);
s.push(14);
s.push(15);
s.push(16);
s.push(17);

cout<<s.top()<<endl;
s.print();
cout<<"size "<<s.sizeofstack()<<endl;

s.pop();
s.print();
return 0;
}

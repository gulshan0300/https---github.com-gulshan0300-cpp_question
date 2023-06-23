#include<iostream>
using namespace std;

class node{
public:
    int data;
    node*next;

    node(int d){
    this->data=d;
    next=NULL;
    }

};

class myqueue{
    public:
    node*head;
    node*tail;

    myqueue(){
    head=NULL;
    tail=NULL;
    }

    void push(int d){
    if(head==NULL){
        node*n= new node(d);
        head=n;
        tail=n;
        return ;
    }
    node*s=new node(d);
    tail->next=s;
    tail=s;
    }

    void pop(){
    if(head!=NULL){
        node*temp=head;
        head=head->next;
        temp->next=NULL;

        delete temp;

    }
    }

    int frontelement(){
    if(head!=NULL){
        return head->data ;
    }
    }

    void print(){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
         }
         cout<<endl;
    }
};

int main(){
myqueue q1;

q1.push(7);

q1.push(5);
q1.push(4);
q1.push(3);
q1.push(2);

q1.pop();
q1.print();

cout<<"front "<<q1.frontelement()<<endl;

}

#include<iostream>
using namespace std;
//template<typename T>
class node{
public:
    int  data;
    node*next;

    node(int d){
    this->data=d;
    next=NULL;
    }
};
//template<typename T>
class mystack{
public:
    node* head;
    int siz;

    mystack(){
    siz=0;
    head=NULL;

    }

    void push(int data){
    node*temp=new node(data);
    temp->next=head;
    head=temp;
    }
    void pop(){
    node*temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
    }

    int topelement(){
    return head->data;
    }

    bool isempty(){
    if(head==NULL){
        return true;
    }
    return false;
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
mystack s1;

s1.push(60);
s1.push(61);

s1.print();

s1.push(62);
s1.push(63);
s1.push(65);

s1.print();

s1.pop();

s1.print();

cout<< "top element " <<s1.topelement()<<endl;

if(s1.isempty()){
    cout<<"empty hai"<<endl;
}
else{
    cout<<"bhara hai"<<endl;
}

return 0;

}

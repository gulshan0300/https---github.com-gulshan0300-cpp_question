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

class queue{

    node*head;
    node*tail;
    int cs;
public:
    queue(){
    head=NULL;
    tail=NULL;
    cs=0;
    }
    void push(int d){
    if(head==NULL){
        node*n=new node(d);
        head=n;
        tail=n;
        cs++;
        return;
    }
    node*n=new node(d);
    tail->next=n;
    tail=n;
    cs++;
    }

    bool isempty(){
    return cs==0;
    }

    void pop(){
        if(!isempty()){
            node*temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
            cs--;
        }

    }

    int front(){
    return head->data;
    }

};

int main(){
queue q;
for(int i=1;i<=10;i++){
    q.push(i);
}
while(!q.isempty()){
    cout<<q.front()<<" ";
    q.pop();
}
return 0;
}

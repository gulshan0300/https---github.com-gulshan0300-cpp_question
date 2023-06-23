#include<iostream>
using namespace std;

class myqueue{
int *arr;
int f,r,cs,ms;
public:

    myqueue(int ds=5){
    arr= new int[ds];
    r=0;
    f=0;
    ms=ds;
    cs=0;
    }

    void push(int d){
    if(cs!=ms){
        arr[r]=d;
        r++;
        cs++;
    }
    }
    void pop(){
    if(cs!=0){
        f++;
        cs--;
    }
    }
    int frontelement(){
    if(cs!=0){
        return arr[f];
    }
    }

    bool isempty(){
    if(cs==0){
        return true;
    }
    return false;
    }
    void print(){
    if(f!=r){
        for(int i=f;i<r;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    }

    ~myqueue(){
    if(arr!=NULL){
        delete []arr;
        arr=NULL;
    }
    }

};

int main(){
myqueue q(5);
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);

q.print();

q.pop();

q.print();

cout<< " first element " << q.frontelement()<<endl;

q.pop();
q.pop();
q.pop();
q.pop();

if(q.isempty()){
    cout<<"khali hai"<<endl;
}
else{
    cout<<"khali nahi hai"<<endl;
}

}

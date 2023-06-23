#include<iostream>
using namespace std;

class myqueue{
int *arr;
int f,r,cs,ms;

public:
    myqueue(int ds =5){
    arr= new int[ds];
    f=0;
    r=0;
    cs=0;
    ms=5;
    }

    void push(int d){
    if(cs!=(ms) ){
        arr[r]=d;
        r=(r+1)%5;
        cs++;
    }
    }

    void pop(){
    if(cs!=0){
        f=(f+1)%5;
        cs--;
    }
    }
    void print(){
        if(f>=r){
    for(int i=f;i<5;i++){

        cout<<arr[i]<<" ";
    }
    for(int i=0;i<r;i++){
        cout<<arr[i]<<" ";
    }
        }

         if(f<r){
            for(int i=f;i<=r;i++){
                cout<<arr[i]<<" ";
            }
        }
    cout<<endl;
    }


    int front1(){
    if(cs!=0){
        return arr[f];
    }
    }

};

int main(){
myqueue q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);

q.print();

q.pop();
q.pop();

q.push(10);
q.push(11);

q.print();

cout<<"front element "<<q.front1()<<endl;
return 0;

}

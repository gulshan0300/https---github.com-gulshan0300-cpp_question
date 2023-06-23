#include<iostream>
using namespace std;

class mydeque{
public:
    int *arr;
    int f,r,cs,ms;

    mydeque(int size){
    arr=new int[size];
    f=-1;
    r=-1;
    cs=0;
    ms=size;
    }

    void push_back1(int d){
    if(f==-1){
        f=0;
        r=0;
    }
    if(cs!=ms){
        arr[r]=d;
        r=(r+1)%ms;
        cs++;
    }
    }

    void push_front1(int d){
    if(f==-1){
        f=0;
        r=0;
    }
    if(cs!=ms){
        f=(f-1)%ms;
        arr[f]=d;

        cs++;
    }
    }

    void pop_front1(){
    if(cs!=0){
        f=(f+1)%ms;
        cs--;

    }
    }

    void pop_back1(){
    if(cs!=0){
        r=(r-1)%ms;
        cs--;
    }
    }

    int front1(){
    if(cs!=0){
        return arr[f];
    }
    }
    int sizearr(){
    return cs;
    }

};

int main(){
mydeque d1(6);

d1.push_back1(1);
d1.push_back1(2);
d1.push_back1(3);

cout<<"front : "<<d1.front1()<<endl;

d1.push_front1(11);

cout<<"front : "<<d1.front1()<<endl;

d1.pop_back1();

cout<<"size: "<<d1.sizearr()<<endl;

}

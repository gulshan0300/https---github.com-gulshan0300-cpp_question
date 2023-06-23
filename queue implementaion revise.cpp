#include<iostream>
using namespace std;

class myqueue{
    int*arr;
    int r,f,cs,ms;
public:
    myqueue(int ds=6){
    r=0;
    f=0;
    cs=0;
    ms=ds;
    arr=new int[ds];
    }

    void push(int d){
    if(cs!=ms){
        arr[r]=d;
        r=(r+1)%ms;
        cs++;
    }
    //return ;
    }
    void pop(){
    if(cs!=0){
        f=(f+1)%ms;
        cs--;
    }
    //return ;
    }

    int front(){
    return arr[f];
    }
    int size(){
    return cs;
    }

    void print(){
    int i=f;

    while((i%ms)!=r){
        cout<<arr[i]<<" ";
        i=(i+1)%ms;
        //cout<<i<<" ";
    }
    cout<<endl;
    }
};

int main(){
    myqueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    //q.push(6);
    q.print();
    //q.pop();
    //q.print();
    //cout<<"front "<<q.front()<<endl;
    return 0;

}

#include<iostream>
using namespace std;

class deque{
    int*arr;
    int f,r,cs,ms;
public:
    deque(int ds){
    arr= new int[ds];
    f = -1;
    r = -1;
    cs = 0;
    ms=ds;
    }

    void push_back(int d){
        if(r==(-1)){
            r=0;
            f=0;
            arr[r]=d;
            cs++;
            return;
        }
    if(cs!=ms){
            r=(r+1)%ms;
        arr[r]=d;
       // cout<<"r "<<r<<endl;
        cs++;
    }
    }
    void push_front(int d){
        if(f==(-1)){
            f=0;
            r=0;
            arr[f]=d;
            cs++;
            return ;
        }
    if(f==0){
            f=ms-1;
        arr[f]=d;
        //cout<<"f "<<f<<endl;
        cs++;
        return;
    }
        f--;
        arr[f]=d;
        cs++;
    }
    void pop_front(){
    if(cs!=0){
        f=(f+1)%ms;
        cs--;
    }
    }
    void pop_back(){
    if(cs==0){
            return;
    }
    if(r==0){
        r=ms-1;
        cs--;
        return;
    }
        r--;
        cs--;
    }
    int front(){

    return arr[f];
    }

    int back(){
        //cout<<"back "<<r;
    return arr[r];
    }

    int size(){
    return cs;
    }
    bool isempty(){
    return cs==0;
    }
};

int main(){
  deque q(10);
    q.push_back(1);
    q.push_back(2);
    q.push_back(3);

    q.push_front(0);
    q.push_front(-1);
    q.push_front(-2);

    cout<<"front data "<<q.front()<<endl;

    cout<<"back data "<<q.back()<<endl;

    cout<<"size "<<q.size()<<endl;

    while(!q.isempty()){
        cout<<q.back()<<" ";
        q.pop_back();
    }

    return 0;


}

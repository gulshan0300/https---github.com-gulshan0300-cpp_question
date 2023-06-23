#include<iostream>
using namespace std;

class mystack{
public:
    int*arr;
    int capacity;
    int top;

    mystack(int c){
    this->capacity=c;
    this->arr=new int[capacity];
    this->top=-1;
    }


void push(int d){
if(top==capacity-1){
    cout<<"overflow";
}
top++;
arr[top]=d;

}

void pop(){
if(top==-1){
    cout<<"underflow";
}
top--;
}

int topelement(){
return arr[top];
}
int sizeofstack(){
return top+1;
}
void print(){
for(int i=0;i<=top;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

};

int main(){
    mystack s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.pop();
    cout<<s.topelement()<<endl;

    cout<<s.sizeofstack()<<endl;
    s.print();

    return 0;
}

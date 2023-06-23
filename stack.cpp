#include<iostream>
using namespace std;

class mystack{
public:
    //int max1=100;
    int *arr;
    int top;
    int capacity;

    mystack(int capacity){
    this->capacity=capacity;
    arr = new int[capacity];
    top=-1;
    }



void push(int d){
    if(top==capacity-1){
        cout<<"stack is overflow"<<endl;
        return ;
    }
    top++;
    arr[top]=d;

}
void pop(){
if(top==-1){
    cout<<"stack in underflow"<<endl;
}
int cur=arr[top];
top--;
}

int topelement(){
 return arr[top];
}

bool isempty(){
if(top==-1){
    return true;
}
return false;
}



void print(){
for(int i=0;i<=top;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
}

~mystack(){
if(arr!=NULL){
    delete []arr;
    arr=NULL;
}
}

};
int main(){
mystack book(100);
book.push(1);
book.push(2);
book.push(3);
book.push(4);

book.print();

book.pop();

book.print();

cout<<"top element "<<book.topelement()<<endl;

book.pop();
book.pop();
book.pop();

if(book.isempty()){
    cout<<"yes empty"<<endl;
}
else{
    cout<<"not empty"<<endl;
}


 //book.print();

return 0;

}

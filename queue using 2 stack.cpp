#include<iostream>
using namespace std;
#include<stack>

class queue{
    stack<int> s1,s2;
public:
    void push(int d){
    s1.push(d);
    }

    void pop(){
    if(s1.empty()){
        return ;
    }
    while(s1.size()>1){
        int element =s1.top();
        s2.push(element);
        s1.pop();
    }
    s1.pop();

    while(!s2.empty()){
        int element =s2.top();
        s1.push(element);
        s2.pop();
    }

    }

    int front(){
    if(!s1.empty()){


    while(s1.size()>1){
        int element =s1.top();
        s2.push(element);
        s1.pop();
    }
    int element=s1.top();

    while(!s2.empty()){
        int element =s2.top();
        s1.push(element);
        s2.pop();
    }
    return element;
    }

    }

    bool isempty(){
    return s1.empty();
    }

};

int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    while(!q.isempty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}

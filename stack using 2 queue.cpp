#include<iostream>
using namespace std;
#include<queue>

class stack{
    queue<int> q1,q2;
public:
    void push(int d){
    q1.push(d);
    }

    void pop(){
    if(q1.empty()){
        return ;
    }
    while(q1.size()>1){
        int element=q1.front();
        q2.push(element);
        q1.pop();

    }
    q1.pop();
    swap(q1,q2);
    }

    int top(){
        if(!q1.empty()){
            while(q1.size()>1){
                int element=q1.front();
                q2.push(element);
                q1.pop();
            }
             int element=q1.front();
            q2.push(element);
            q1.pop();
            swap(q1,q2);
            return element;


        }

    }

    int size(){
    return q1.size()+q2.size();
    }
    bool isempty(){
    return size()==0;
    }


};

int main(){
stack s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);

    while(!s.isempty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

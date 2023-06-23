#include<iostream>
using namespace std;
#include<stack>
void put_bottem(stack<int>&s,int x){
if(s.empty()){
    s.push(x);
    return;
}
int data=s.top();
s.pop();
put_bottem(s,x);
s.push(data);
}

void rec_reverse(stack<int>&s){
if(s.empty()){
    return ;
}
int d=s.top();
s.pop();
rec_reverse(s);
put_bottem(s,d);
}

int main(){
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
rec_reverse(s);
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
return 0;
}

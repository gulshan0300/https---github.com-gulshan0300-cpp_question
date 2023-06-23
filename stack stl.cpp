#include<iostream>
using namespace std;
#include<stack>

int main(){
stack<char> s;

for(int i=65;i<=70;i++){
    s.push(i);
}

while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
return 0;
}

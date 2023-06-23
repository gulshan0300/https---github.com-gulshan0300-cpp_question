#include<iostream>
#include<vector>
using namespace std;

class mystack{
private:
    vector<int> v;
public:
    void push(int d){
    v.push_back(d);
    }

    void pop(){

    v.pop_back();
    }

    bool isempty(){

    if(v.size()==0){
        return true;
    }
    return false;

    }
    int top(){
    return v[v.size()-1];
    }
};

int main(){
mystack s;
for(int i=1;i<=5;i++){
    s.push(i+i);

}
while(!s.isempty()){
    cout<<s.top()<<endl;
    s.pop();
}
if(s.isempty()){
    cout<<"khali hai bhai"<<endl;
}
else{
    cout<<"bhara hai bhai"<<endl;
}
return 0;
}

#include<iostream>
using namespace std;
class test{
    public:
int x;
test(){
x=5;
}
};
int main(){
test*t=new test;
cout<<t->x<<endl;
}

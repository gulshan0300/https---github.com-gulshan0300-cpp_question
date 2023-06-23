#include<iostream>
using namespace std;
class A{
public:
    void fun1(){
    cout<<"inside fun1"<<endl;
    }
};
class b: public A{
public:
    void fun2(){
    cout<<"inside fun2"<<endl;

    }
};
class c: public A{
public:
    void fun3(){
    cout<<"inside fun3"<<endl;
    }
};

int main(){
A object1;
object1.fun1();

b object2;
object2.fun1();
object2.fun2();

c object3;
object3.fun1();
object3.fun3();
return 0;
}

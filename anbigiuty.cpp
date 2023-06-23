#include<iostream>
using namespace std;

class a{
public:
    int x;
    int y;
    void operator+ (a &obj){
    int value=this->x;
    int value1=obj.x;
    cout<<value1-value<<endl;
    }
    void operator() (){
    cout<<"sab sahi chal raha hai"<<endl;
    }
   void fun(){
    cout<<"inside a class "<<endl;
    }
};
class b{
public:
     void fun(){
    cout<<"inside b class"<<endl;
    }
};
class c: public a,public b{
public:
    void sun(){
    cout<<"inside c class"<<endl;
    }
};

int main(){
    a obj1,obj2;
    obj1.x=4;
    obj2.x=7;
    //obj1+obj2;//this is called function overloading.
     obj1();



    /*c obje1;
    obje1.b::fun();*/
return 0;
}

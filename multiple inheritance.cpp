#include<iostream>
using namespace std;

class animal{
public:
    int age;
    int weight;
    void bark(){
    cout<<"barking"<<endl;
    }
};
class human{
    public:
string coloure;
void speak(){
cout<<"speaking"<<endl;
}
};

class hybrid: public animal, public human{

};
int main(){
hybrid h1;
h1.speak();
h1.bark();
return 0;
}

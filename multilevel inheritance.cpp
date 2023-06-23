#include<iostream>
using namespace std;
class animal{
public:
    int age;
    int types;
    void speak(){
    cout<<"speaking"<<endl;
    }
};
class dog: public animal{

};
class germendog: public dog{

};
int main(){
germendog d1;
d1.speak();
return 0;
}

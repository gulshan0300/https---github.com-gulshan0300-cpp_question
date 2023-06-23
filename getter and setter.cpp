#include<iostream>
using namespace std;
class car{
private:
    int price;
public:
    car(){
    cout<<"constructer is done"<<endl;
    }
    int model;
    int getvalue(){
    return price;
    }
    void setvalue(int x){
    price=x;
    //return price;
    }
};
int main(){
car c;
car *d=new car;
/*c.setvalue(10125);
cout<<c.getvalue()<<endl;
//dynamic loaction
car *p=new car;
(*p).setvalue(100);
cout<<(*p).getvalue()<<endl;
//or this
cout<<p->getvalue()<<endl;
delete p;*/
return 0;

}

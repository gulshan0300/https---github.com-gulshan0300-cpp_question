#include<iostream>
using namespace std;
class car{
    public:
int price;
int model;
char name[100];
float discount(float x){
return price*(1-x);
}
};
int main(){
car c;
c.price=100;
c.model=112;
c.name[0]= 'B';
c.name[1]= 'M';
c.name[2]= 'w';
c.name[3]= '\0';
cout<<c.price<<" "<<c.model<<" "<<c.name<<endl;
cout<<"enter the value of discount"<<endl;
float x;
cin>>x;
cout<<c.discount(x)<<endl;

return 0;
}

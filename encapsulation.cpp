#include<iostream>
using namespace std;

class bottle{
int counte;
string coloure;
public:
    int get(){
    return counte;
    }
    bottle(int x){
    this->counte=x;
    }
};

int main(){
bottle big(5);
cout<< big.get()<<endl;
return 0;
}

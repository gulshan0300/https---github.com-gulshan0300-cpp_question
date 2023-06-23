#include<iostream>
using namespace std;
class hero{
public:
    int health;
    char level;
    hero(int health,char level){
    this->health=health;
    this->level=level;
    }
    hero(hero& temp){
    this->health=temp.health;
    this->level=temp.level;
    }
    void print(){
    cout<<"health "<<health<<endl;
    cout<<"level "<<level<<endl;
    }
};
int main(){
hero super(22,'a');
super.print();
hero bat(super);
bat.print();
return 0;
}

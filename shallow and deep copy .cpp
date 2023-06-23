#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
class hero{
int health;
char *name;
char level;
public:
    hero(){
    name= new char[100];
    }
    void print(){
    cout<<"[ name :"<<this->name<<",";
    cout<<"health:"<<this->health<<",";
    cout<<"level:"<<this->level<<"]";
    cout<<endl<<endl;
    }
    int gethealth(){
    return health;
    }
    char getlevel(){
    return level;
    }

    void sethealth(int x){
    this->health=x;
    }
    void setlevel(char c){
    this->level=c;
    }
    void setname(char name[]){
    strcpy(this->name,name);
    }
    hero(hero&temp){
    char *ch=new char[strlen(temp.name)+1];
    strcpy(ch,temp.name);
    this->name=ch;
    this->health=temp.health;
    this->level=temp.level;
    }
};
int main(){
hero super;
super.sethealth(12);

super.setlevel('a');

char name[8]="gulshan";

super.setname(name);
super.print();
hero bat(super);
bat.print();
name[0]='k';
super.setname(name);
super.print();
bat.print();
super=bat;
super.print();
bat.print();
return 0;
}


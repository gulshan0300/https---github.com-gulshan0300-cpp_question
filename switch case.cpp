#include<iostream>
using namespace std;
int main(){
char ch;
cin>>ch;
switch(ch){
case'N':
      cout<<"north"<<endl;
case'S':
      cout<<"south"<<endl;
case'E':
      cout<<"east"<<endl;
case'w':
      cout<<"west"<<endl;
default:
      cout<<"invalid input"<<endl;

}
cout<<endl;
return 0;
}

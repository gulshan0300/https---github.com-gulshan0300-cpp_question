#include<iostream>
#include<cstring>
#include"hashtable.h"
using namespace std;

int main(){
  hashtable price_menu;
  price_menu.insertfun("burger",120);
  price_menu.insertfun("patty",10);
  price_menu.insertfun("colddrinks",100);
  price_menu.insertfun("kake",220);
  price_menu.insertfun("chaat",50);
  price_menu.insertfun("pepsi",150);
  price_menu.print();
  cout<<endl;
 /* node*key=price_menu.searchkey("kak");

  if(key==NULL){
    cout<<"key is not found";
  }
  else{
    cout<<"key is "<<key->value<<" ";
  }*/

 // price_menu.erasekey("pepsi");
     //price_menu.print();
     cout<<endl;
     //price_menu.print();

     price_menu["dosa"]=60;

     price_menu["dosa"]+=10;

     cout<<"price "<<price_menu["dosa"];


return 0;
}

#include<iostream>
#include<unordered_map>
using namespace std;

int main(){

  unordered_map<string,int> m;

  m.insert(make_pair("apple",120));

  //or
  pair<string ,int>p;
  p.first="banana";
  p.second =40;
  m.insert(p);
  //or
  m["litchi"]=50;

  //iterarte over all the values through iterator
   for(auto it=m.begin();it !=  m.end();it++){
    cout<<it->first<<" "<<it->second<<endl;

   }

   auto it=m.find("banana");
   if(it!=m.end()){
    cout<<"price of banana "<<m["banana"]<<endl;
   }
   else{
    cout<<"not found"<<endl;
   }
   return 0;
}

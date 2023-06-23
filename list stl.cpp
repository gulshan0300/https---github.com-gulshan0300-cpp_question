#include<iostream>
#include<list>
using namespace std;

int main(){
list<string> L1 { "apple", "banana", "pineapple", "mango" };

L1.push_back("grapes");

//for itration on list
for(string s: L1){
    cout<<s<<"->";
}
cout<<endl;
L1.push_front("shakes");
for(string s: L1){
    cout<<s<<"->";
}

return 0;
}

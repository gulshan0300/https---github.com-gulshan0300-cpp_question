#include<iostream>
#include<vector>
#include<cstring>
#include<unordered_map>
using namespace std;

int main(){

    unordered_map<string,vector<string>> phonebook;

    phonebook["rahul"].push_back("98271");
    phonebook["gulshan"].push_back("87898");
    phonebook["gulshan"].push_back("77898");
    phonebook["gulshan"].push_back("67898");
    phonebook["gulshan"].push_back("57898");
    phonebook["rahul"].push_back("98200");
    phonebook["rahul"].push_back("9830071");

    for(auto s:phonebook){
        cout<<"name "<<s.first<<" ";
        for(string p:s.second){
            cout<<p<<" ";
        }
        cout<<endl;
    }
return 0;
}

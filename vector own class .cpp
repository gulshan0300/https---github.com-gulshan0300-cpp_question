#include<iostream>
#include "vector.h"

using namespace std;

int main(){
 vector<char> v;
v.push_back(71);
v.push_back(73);
v.push_back(74);
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
return 0;

}

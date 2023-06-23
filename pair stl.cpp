#include<iostream>
using namespace std;
int main(){
pair<int,int> p;
p.first=10;
p.second=101;
cout<<p.first<<endl;
cout<<p.second<<endl;
pair<string,int> s;
s=make_pair("bmw",10);
cout<<s.first<<endl;
cout<<s.second<<endl;
pair<string,pair<float,int> > g;
g.first="bmw";
g.second.first=10.11;
g.second.second=12;
cout<<g.first<<endl;
cout<<g.second.first<<endl;
cout<<g.second.second<<endl;
return 0;
}

#include<iostream>
#include<vector>
using namespace std;


int main(){
vector<int> a(5,10);
for(int i=0;i<a.size();i++){
    cout<<a.at(i)<<",";
}
cout<<endl;
vector<int>:: iterator it;// instead of this we can also  use auto type.
for( it=a.begin();it!=a.end();it++){
    cout<< (*it)<<",";
}
cout<<endl;
for(int x:a){
    cout<<x<<",";
}

//user input
vector<int> v;
int n;
cin>>n;
for(int i=0;i<n;i++){
    int no;
    cin>>no;
    v.push_back(no);
}

for(int y:v){
    cout<<y<<",";
}
cout<<endl;
cout<<v.size()<<endl;
cout<<v.capacity()<<endl;
cout<<v.max_size()<<endl;
return 0;
}

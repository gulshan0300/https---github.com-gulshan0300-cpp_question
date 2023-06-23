#include<iostream>
using namespace std;
int x=100;
int main(){
    cout<<(::x)<<endl;
    int x=1;
int a=1;
if(a>0){
    int x=10;
    cout<<(::x)<<endl;
}
cout<<(::x);
return 0;
}

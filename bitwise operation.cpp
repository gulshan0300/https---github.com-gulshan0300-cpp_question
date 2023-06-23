#include<iostream>
using namespace std;
bool isodd(int n){
int lsb=(n&1)==0 ? 0 : 1;
return lsb;
}
bool checkith(int n,int i){
int mask=1<<i;
if((n&mask)>0 ){
    return true;
}
else{
    return false;
}
}
int main(){
int n;
cin>>n;
if(isodd(n)){
    cout<<"odd"<<endl;
}
else{
    cout<<"even"<<endl;
}
if(checkith(n,3))
    cout<<"3rd bit is "<<" 1 "<<endl;
else{
    cout<<"3rd bit is "<< " 0 "<<endl;
}
return 0;
}

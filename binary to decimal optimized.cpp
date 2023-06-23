#include<iostream>
using namespace std;
void decimal(int n){
int mask=(1<<30);
bool isonefound=false;
while(mask!=0){
   if((n&mask)==0 && isonefound==false){
    mask=mask>>1;
    continue;
   }
   else{
    isonefound=true;
    if( (n&mask)==0 ){
        cout<<"0";
    }
    else{
        cout<<"1";
    }
    mask=mask>>1;
   }
}
}
int main(){
int n;
cin>>n;
decimal(n);
return 0;
}

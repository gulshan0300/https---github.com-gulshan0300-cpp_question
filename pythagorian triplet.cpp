#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,x,y;
int m;
cin>>n;
if(n<pow(10,9)){
   if(n%2==0){
    m=n/2;
    x=pow(m,2)-1;
    y=pow(m,2)+1;
   }
   else if(n%2==1){
    m=sqrt(n+1);
    x=2*m;
    y=pow(m,2)+1;
   }

   cout<<x<<"\t"<<y<<endl;
}
cout<<endl;
return 0;
}

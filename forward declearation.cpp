#include<iostream>
using namespace std;

int multiply(int a,int b);
int main(){
int a=10,b=20;
cout<<multiply(a,b)<<endl;

int ans=multiply(100,200);
cout<<ans<<endl;
return 0;
}
int multiply(int a,int b){
return a*b;
}

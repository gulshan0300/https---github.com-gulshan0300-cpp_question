#include<iostream>
using namespace std;
int multiply(int a,int b){
int p=a*b;
return p;
}

int main(){
int a=10; int b=20;
int ans=multiply(a,b);
cout<<ans+20;
return 0;
}

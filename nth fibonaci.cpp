#include<iostream>
using namespace std;
int fibo(int n){
if(n==0 || n==1){
    return n;
}
int smaller1=fibo(n-1);
int smaller2=fibo(n-2);
//int bigger=fibo(n);
int bigger=smaller1+smaller2;
return bigger;
}
int main(){
int n;
cin>>n;
cout<<fibo(n);
return 0;
}

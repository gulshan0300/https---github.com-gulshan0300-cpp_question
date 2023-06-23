#include<iostream>
using namespace std;

int fibonacci(int n){
int i,a=0,b=1,sum=0;
for(i=1;i<=n-2;i++){
    sum=a+b;
    a=b;
    b=sum;

}
return sum;
}
int main(){
int n;
cin>>n;
cout<<fibonacci(n);
return 0;
}

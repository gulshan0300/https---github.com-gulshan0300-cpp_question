#include<iostream>
using namespace std;
int fact(int n){
if(n==0){
    return 1;
}
int smaller =fact(n-1);
int bigger = n*smaller;
return bigger;
}
int main(){
int n=6;
cout<<fact(n);
return 0;
}

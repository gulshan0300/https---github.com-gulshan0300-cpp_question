#include<iostream>
using namespace std;
int first(int *a,int n,int key){
if(n==0){
    return -1;
}
if(a[0]==key){
    return 0;
}
int i=first(a+1,n-1,key);
if(i==-1){
    return -1;
}
else{
    return i+1;
}
}
int firsti(int *a,int n,int key,int i){
if(i==n){
    return -1;
}
if(a[i]==key){
    return i;
}
return firsti(a,n,key,i+1);
}
int main(){
int a[]={2,4,6,17,14,5};
int n=sizeof(a)/sizeof(int);
cout<<first(a,n,14)<<endl;
cout<<firsti(a,n,26,0)<<endl;
return 0;
}

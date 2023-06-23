#include<iostream>
using namespace std;
int last(int *a,int n,int key,int i){
    int k=0;
if(i==n){
    return -1;
}
if(a[i]==key){


int bi=last(a,n,key,i+1);
if(bi!=-1){
    return bi;
}
else{
    return i;
}
}
else{
    int j=last(a,n,key,i+1);
    return j;
}
}
int main(){
int a[]={1,3,4,5,6,1,4,5};
int n=sizeof(a)/sizeof(int);
cout<<last(a,n,4,0);
return 0;
}

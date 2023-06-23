#include<iostream>
using namespace std;
int binarysearch(int *a,int n,int s,int e,int key){
if(s>e){
    return -1;
}
int m=(s+e)/2;
if(a[m]==key){
    return m;
}
else if(a[m]>key){
    return binarysearch(a,n,s,m-1,key);
}
else{
    return binarysearch(a,n,m+1,e,key);
}
}
int main(){
int a[]={2,3,4,6,8,12,14,16};
int n=sizeof(a)/sizeof(int);
int key=12;
cout<<binarysearch(a,n,0,n-1,key);
return 0;
}

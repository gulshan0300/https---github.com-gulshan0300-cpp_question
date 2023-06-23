#include<iostream>
using namespace std;
bool issorted(int*a,int n){
if(n==0 || n==1){
    return true;
}
if(issorted(a+1,n-1) && a[0]<=a[1]){
    return true;
}
else{
    return false;
}
}
int main(){
int a[]={1,3,5,7,30,20};
int n=sizeof(a)/sizeof(int);
bool ans=issorted(a,n);
if(ans==true){
    cout<<"sorted"<<endl;
}
else{
    cout<<"not sorted"<<endl;
}
return 0;
}

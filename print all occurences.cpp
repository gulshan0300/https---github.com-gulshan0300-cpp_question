#include<iostream>
using namespace std;
int out[100];
int j=0;
void print(int *a,int n,int key,int i){
if(i==n){
    return ;
}
if(a[i]==key){
    cout<<i<<" ";
    out[j]=i;
    j++;
}
return print(a,n,key,i+1);
}
int main(){
int a[]={1,2,3,2,4,2};
int n=sizeof(a)/sizeof(int);
print(a,n,2,0);
cout<<endl;
cout<<"indices are:";
for(int i=0;i<j;i++){
    cout<<out[i]<<" ";
}
return 0;
}

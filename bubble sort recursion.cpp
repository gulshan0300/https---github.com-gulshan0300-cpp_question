#include<iostream>
using namespace std;
void print(int *a,int n){
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}
void bubblesort(int *a,int n,int i){
if(i==n-1){
    return ;
}
for(int j=0;j<n-1-i;j++){
    if(a[j]>a[j+1]){
        swap(a[j+1],a[j]);
    }
}
bubblesort(a,n,i+1);
}
int main(){
int a[]={5,4,3,2,1,-1,-8};
int n=sizeof(a)/sizeof(int);
print(a,n);
bubblesort(a,n,0);
print(a,n);
return 0;
}

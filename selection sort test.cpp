#include<iostream>
using namespace std;
int main(){
int a[]={5,4,3,2,1};
int n=sizeof(a)/sizeof(int);
for(int i=0;i<n;i++){
    int small=i;
    for(int j=i+1;j<n;j++){
        if(a[j]<a[small]){
            small=j;
        }
    }
    swap(a[small],a[i]);
}
cout<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
return 0;
}

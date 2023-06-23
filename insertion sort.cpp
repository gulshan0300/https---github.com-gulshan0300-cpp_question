#include<iostream>
using namespace std;
int main(){
int a[5]={5,3,1,2,4};
int i,j,n=5;
for(i=0;i<n;i++){
    cout<<a[i]<<"   ";
}
cout<<endl;
for(i=1;i<n;i++){
    int pu=a[i];
    for(j=i-1;j>=0 && a[j]>pu;j--){

            a[j+1]=a[j];

    }
a[j+1]=pu;
}
cout<<"after sorting"<<endl;
for(i=0;i<n;i++){
    cout<<a[i]<<"   ";
}
cout<<endl;
return 0;
}

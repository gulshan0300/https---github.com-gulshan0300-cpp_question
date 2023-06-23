#include<iostream>
using namespace std;
int main(){
int a[5]={5,3,1,2,4};
int i,j,n=5;
for(i=0;i<n;i++){
    cout<<a[i]<<"   ";
}
cout<<endl;
for(i=0;i<=n-2;i++){
    int min=i;
    for(j=i+1;j<n;j++){
        if(a[j]<a[min]){
            min=j;
        }
    }
    swap(a[min],a[i]);
}
for(i=0;i<n;i++){
    cout<<a[i]<<"   ";
}
cout<<endl;
return 0;
}

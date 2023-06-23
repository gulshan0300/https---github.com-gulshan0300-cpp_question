#include<iostream>
using namespace std;
int main(){
int b[100];
int n =5;
cout<<sizeof(b)<<endl;
int *a=new int[100];
cout<<sizeof(a)<<endl;
for(int i=0;i<n;i++){
    cin>>a[i];
    cout<<a[i]<<" ";
}
//delete []a;
return 0;
}

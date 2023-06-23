#include<iostream>
using namespace std;
int main(){
int a[]={1,2,3,4,5};
int n= sizeof(a)/sizeof(int);
int ar[n];
int i,sum=0;

for(i=0;i<n;i++){
    cout<<a[i]<<"   ";
}
cout<<endl;
int k,mod;
cin>>k;
mod=k%n;
for(i=0;i<n;i++){
        ar[(k+i)%n]=a[i];
       // sum=ar[i]+ar[i-1];
        //cout<<sum<<"    ";
   // cout<<a[ (k+i)%n ]<<" ";
}
cout<<endl;
//ar[i]=a[i];
for(i=0;i<n;i++){
    cout<<ar[i]<<"  ";
    //sum=a[i]+ar[i];
    //cout<<sum<< "   ";
}
cout<<endl;
for(i=0;i<n;i++){
a[i]=a[i]+ar[i];
    cout<<a[i]<< "   ";
}
cout<<endl;
return 0;
}

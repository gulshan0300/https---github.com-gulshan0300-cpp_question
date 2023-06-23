#include<iostream>
using namespace std;

int main(){
int n,i,j;
cin>>n;
int a[n];
int ar[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
cout<<endl;
for(i=0;i<n;i++){
     ar[a[i]]=i;
     //cout<<i<<"   ";
    }
for(i=0;i<n;i++){
    cout<<ar[i]<<"    ";
}
cout<<endl;
     return 0;
    }
    //cout<<a[j]<<"   ";

#include<iostream>
#include<climits>
using namespace std;
int main(){

int a[5];
int i,n=5;
int l=INT_MIN;
cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
    cout<<endl;
}
for(i=0;i<n;i++){
    if(a[i]>l){
        l=a[i];
    }
}
cout<<l<<endl;
return 0;
}

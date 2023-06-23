#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
return a>b;
}

int main(){

int a[]={4,3,5,2,1};
int i;
int n=sizeof(a)/sizeof(int);
for(i=0;i<n;i++){
    cout<<a[i]<<"   ";
}
cout<<endl;
sort(a,a+n ,compare);
for(i=0;i<n;i++){
    cout<<a[i]<<"   ";
}
cout<<endl;
return 0;
}

#include<iostream>
using namespace std;
int main(){
int n,i,r;
cin>>n;
for(i=1;n>0;i++){
    r=n%10;
    n/=10;
    cout<<r;
}
cout<<endl;
return 0;
}

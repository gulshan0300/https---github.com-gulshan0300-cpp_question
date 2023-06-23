#include<iostream>
#include<cmath>
using namespace std;

void zeroes(int n){
int i,ans=0,no;
for(i=1;i<=n/5;i++){
    no=n/pow(5,i);
    ans+=no;
}
cout<<ans<<endl;
}
int main(){
int n;
cin>>n;
zeroes(n);
return 0;
}

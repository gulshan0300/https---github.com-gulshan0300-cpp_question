#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,i,r,ans=0,j;
cin>>n;
for(i=0;n>0;i++){
    r=n%10;
    n/=10;
    j=r*(pow(2,i));
    ans=ans+j;
}
cout<<ans<<"\t";
return 0;
}

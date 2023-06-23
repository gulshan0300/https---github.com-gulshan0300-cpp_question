#include<iostream>
using namespace std;
int main(){
int i,ans=0,r,n;
cin>>n;
for(i=1;n>0;i++){
    r=n%10;
    n/=10;
    ans+=r;
}
cout<<ans;
return 0;
}

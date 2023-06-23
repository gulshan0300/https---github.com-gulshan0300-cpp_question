#include<iostream>
using namespace std;
int main(){
int i,n,a=0,b=1,ans=0,f=0;
cin>>n;
for(i=1;i<=n-1;i++){
    f=a+b;
    a=b;
    b=f;
    ans=f;
}
cout<<ans<<endl;
return 0;
}

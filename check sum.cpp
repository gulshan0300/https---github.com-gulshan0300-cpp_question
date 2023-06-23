#include<iostream>
#include<cmath>
using namespace std;

int main(){
int i,r,ans=0,n,j,a=1;
cin>>n;
for(i=1;n>0;i++){
    r=n%10;
    int newn=9-r;
    if(r<newn||n==9){
        ans=ans+(r*a);
    }
    else if(r>newn){
        ans=ans+(newn*a);
    }
    n/=10;
    a=a*10;
    cout<<ans<<endl;
}
cout<<ans<<endl;
}

#include<iostream>
using namespace std;

void change(long n){
int i,r,ans=0,a=1;
for(i=1;n>0;i++){
    r=n%10;
    if(r==0){
        ans+=5*a;
    }
    else{

        ans+=r*a;
    }
    n/=10;
    a=a*10;
}
cout<<ans<<endl;
}
int main(){
long n;
cin>>n;
if(n>=0||n<=1000000000000){
    change(n);
}
return 0;
}

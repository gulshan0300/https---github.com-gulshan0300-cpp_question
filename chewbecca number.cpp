#include<iostream>
#include<cmath>
using namespace std;

void revers(long long n){
int i,r,ans=0;
for(i=1;n>0;i++){
    r=n%10;
    n/=10;
    if(r>9-r){
        r=9-r;
    }
    else if(r<9-r){
        r=r;
    }
    ans=ans+r*pow(10,i-1);
    cout<<ans<<endl;
}
cout<<ans<<endl;
}
int main(){
long long n;
cin>>n;
revers(n);
return 0;
}

#include<iostream>
using namespace std;
bool bosten(long n){
long i,j,r,ans=0,sum=0;
long m=n;
for(i=2;i<=m;){


    if(m%i==0){
        m/=i;
        ans+=i;
    }
    else{
        i++;
    }
    cout<<ans<<endl;
}
m=n;
for(i=1;m>0;i++){
    j=m%10;
    m/=10;
    sum+=j;
}

if(ans==sum){
    return true;
}
else{
    return false;
}
}
int main(){
long n;
cin>>n;
cout<<bosten(n);
return 0;
}

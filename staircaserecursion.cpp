#include<iostream>
using namespace std;
int stairecase(int n){
if(n==0){
    return 1;
}
if(n<0){
    return 0;
}
return stairecase(n-1) + stairecase(n-2) + stairecase(n-3);
}
int nstaires(int n,int k){
if(n==0){
    return 1;
}
if(n<0){
    return 0;
}
int ans=0;
for(int i=1;i<=k;i++){
    ans=ans+nstaires(n-i,k);
}
return ans;
}
int main(){
int n=10;
cout<<stairecase(n)<<endl;
cout<<nstaires(n,3)<<endl;
return 0;
}

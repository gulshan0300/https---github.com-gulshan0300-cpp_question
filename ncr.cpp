#include<iostream>
using namespace std;

int fact(int n){
int i,ans=1;
for(i=1;i<=n;i++){
    ans*=i;
}
return ans;
}
int ncr(int n,int r){
int a=fact(n);
int b=fact(r);
int c=fact(n-r);
int ans=a/(b*c);
return ans;
}
int main(){
int n,r;
cin>>n>>r;
cout<<ncr(n,r);
return 0;
}

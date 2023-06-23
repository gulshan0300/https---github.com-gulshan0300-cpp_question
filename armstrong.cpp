#include<iostream>
#include<cmath>
using namespace std;

int no(int n){
int i,digit=0,ans=0,j;
for(i=1;n>0;i++){
    int r=n%10;
    n/=10;
    digit=i;
}
return digit;
}
int main(){
    long long m;
int n,j,r,ans=0;
cin>>m;
n=m;
 int x=no(n);
for(j=1;n>0;j++){
    r=n%10;
    n/=10;

    ans=ans+pow(r,x);

}
if(ans == m)
    cout<<"true"<<endl;

else
    cout<<"false"<<endl;

cout<<ans<<endl;
return 0;
}

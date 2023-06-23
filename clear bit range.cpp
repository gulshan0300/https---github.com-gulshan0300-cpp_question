#include<iostream>
#include<cmath>
using namespace std;
void clearbit(int n,int i){
int mask=(~0);
mask=mask<<i;
int res=(n&mask);
cout<<res<<endl;
}
void clearrange(int &n,int j,int i){
int ma=(~0);
ma=ma<<j;
int mb=pow(2,i)-1;
int mask=(ma|mb);
n= (n&mask);
}
int main(){
int n,j=4,i=2;
cin>>n;
clearrange(n,j,i-1);
cout<<n<<endl;
//clearbit(n,3);
return 0;
}

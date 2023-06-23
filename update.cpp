#include<iostream>
using namespace std;
void clearrange(int &n,int j,int i){
int ma=(~0);
ma=(ma<<j);
int mb=(1<<i)-1;
int mask=ma|mb;
n=(n&mask) ;
}
void updatebits(int &n,int m,int i,int j){
m= (m<<(i-1));
clearrange(n,j,i-1);
n= (n|m);
}
int main(){
int n=15;
int m=2;
int i=2;
int j=4;
//clearrange(n,j,i);
cout<<n<<endl;
updatebits(n,m,i,j);
cout<<n<<endl;
return 0;
}

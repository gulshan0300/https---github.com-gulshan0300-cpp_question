#include<iostream>
#include<cmath>
using namespace std;
int main(){
int c,m,m1,step,i;
cin>>m>>m1>>step;
for(i=m;i<=m1;i=i+step){
c=(i-32)*5/9;

cout<<i<<"\t"<<c<<endl;
}
cout<<endl;
return 0;
}

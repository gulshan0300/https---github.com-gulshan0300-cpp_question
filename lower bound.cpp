#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b){
return a<=b;
}
int main(){
int a[]={1,2,5,10,20,50,100};
int n=sizeof(a)/sizeof(int);
int money=50;
while(money>0){
int*p=lower_bound(a,a+n,money,compare);
int index=p-a-1;
cout<< "exchange of: "<<a[index]<<endl;
money=money-a[index];
}

//cout<<*p<<endl;
//cout<<index<<endl;
return 0;
}

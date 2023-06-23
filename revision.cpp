#include<iostream>
using namespace std;
void update(int*a){
*a=*a+1;
cout<<*a<<endl;
}
int main(){
int a[]={1,2,3,4,5};
int*p;
p=a;
for(int i=0;i<5;i++){
    cout<<(a+i)<<endl;
}
cout<<p<<endl;
return 0;
}

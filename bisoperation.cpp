#include<iostream>
using namespace std;
int clearbit(int &a,int i){
int mask=1<<i;
mask=~mask;
int res=a&mask;
return res;

}
int main(){
int n=20;
cout<<clearbit(n,3)<<endl;
return 0;
}

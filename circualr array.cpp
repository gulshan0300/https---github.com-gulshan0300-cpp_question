#include<iostream>
using namespace std;
int main(){
int a[]={6,3,5,7,9};
int i,n=5;
int ar[5];
int x=2;
for(i=0;i<5;i++){
        int j=i-x;
if(i==0&&x!=0){
        j=n-x;
     }
    ar[i]=a[i]+a[(j)];
    cout<<ar[i]<<"  ";

}
cout<<endl;
return 0;
}

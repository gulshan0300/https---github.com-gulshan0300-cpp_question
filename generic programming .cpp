#include<iostream>
using namespace std;

template<typename t>
t search1(t *a,int n,t key){
    int i;
for( i=0;i<n;i++){
    if(a[i]==key){
        return i;
    }


}
if(i==n){
    return -1;
}
}

int main(){
float a[]={1,2,3.2,4,5.1,6,7,8,9};
int n=sizeof(a)/sizeof(int);
float key=3.2;
cout<<search1(a,n,key)<<endl;
return 0;
}

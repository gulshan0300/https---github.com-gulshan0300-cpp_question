#include<iostream>
using namespace std;
void wavesort(int *a,int n){
for(int i=0;i<n;i+=2){
    if(i>0 && a[i-1]>a[i]){
        swap(a[i],a[i-1]);
    }
    if(i<=n-2 && a[i]<a[i+1]){
      swap(a[i],a[i+1]);
    }
}

}
int main(){
int a[]={2,3,1,4,6,7,8};
int n=sizeof(a)/sizeof(int);
wavesort(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";

}
return 0;
}

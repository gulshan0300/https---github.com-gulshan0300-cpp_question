#include<iostream>
using namespace std;
void dnfsort(int *a,int n){
int low=0;
int mid=0;
int high=n-1;
while(mid<=high){
    if(a[mid]==0){
        swap( a[mid],a[low] );
        low++;
        mid++;
    }
    else if(a[mid]==1){
        mid++;
    }
    else if(a[mid]==2){
        swap(a[mid],a[high]);
        high--;
    }
}
}
int main(){
int a[]={0,1,2,0,1,2,0,1,2,0,2};
int n=sizeof(a)/sizeof(int);
dnfsort(a,n);
for(int i=0;i<n;i++){

    cout<<a[i]<<" ";
}
return 0;
}

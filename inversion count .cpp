#include<iostream>
using namespace std;
int merge1(int *a,int s,int e){
int mid=(s+e)/2;
int ans=0;
int i=s;
int j=mid+1;
int k=s;
int temp[1000];
while(i<=mid && j<=e){
    if(a[i]>a[j]){
        temp[k++]=a[j++];
        ans++;
    }
    if(a[i]<a[j]){
        temp[k++]=a[i++];
    }
}
while(i<=mid){
    temp[k++]=a[i++];
    ans++;
}
while(j<=e){
    temp[k++]=a[j++];
}
return ans;
}
int inversioncount(int *a,int s,int e){
if(s>=e){
    return 0;
}
int mid=(s+e)/2;
int x=inversioncount(a,s,mid);
int y=inversioncount(a,mid+1,e);
int z=merge1(a,s,e);
return x+y+z;
}


int main(){
int a[]={2,6,8,1,3,5,7};
int n=sizeof(a)/sizeof(int);
cout<<inversioncount(a,0,n-1)<<endl;
return 0;
}

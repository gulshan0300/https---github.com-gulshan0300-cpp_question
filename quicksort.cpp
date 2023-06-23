#include<iostream>
using namespace std;
void print(int *a,int n){
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
}
int segment(int *a,int s,int e){
int i=s-1;
for(int j=s;j<e;j++){
    if(a[j]<=a[e]){
        i++;
        swap(a[i],a[j]);
    }
}
swap(a[i+1],a[e]);
return i+1;
}
void quicksort(int*a,int s,int e){
if(s>=e){
    return ;
}
int index=segment(a,s,e);
quicksort(a,s,index-1);
quicksort(a,index+1,e);
}
int main(){
int a[]={2,5,1,6,7,8,4,5,9};
int n=sizeof(a)/sizeof(int);
quicksort(a,0,n-1);
print(a,n);
return 0;
}

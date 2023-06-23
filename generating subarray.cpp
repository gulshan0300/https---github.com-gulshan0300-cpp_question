#include<iostream>
#include<climits>
using namespace std;

void subarray(int a[],int n){
int i,j,k;
for(i=0;i<n;i++){
    for(j=i;j<n;j++){
        for(k=i;k<=j;k++){
            cout << a[k];
        }
        cout << endl;
    }
}
}
void maximumsum(int a[],int n){
int i,j,k;
int maxnum=INT_MIN;
int wi,wj;
for(i=0;i<n;i++){
    for(j=i;j<n;j++){
            int sum=0;
        for(k=i;k<=j;k++){
            sum+=a[k];
        }
        if(sum>maxnum){
            maxnum=sum;
    wi=i;
    wj=j;
        }
        cout << endl;
    }
}
for(i=wi;i<=wj;i++){
    cout << a[i] ;
}
cout<<endl;
cout << maxnum << endl;
}

int main(){
int a[]={1,2,3,4,5};
int n=sizeof(a)/sizeof(int);
subarray(a,n);
maximumsum(a,n);
return 0;
}

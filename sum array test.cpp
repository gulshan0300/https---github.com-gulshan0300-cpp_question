#include<iostream>
#include<cmath>
using namespace std;
void copyarray(long long int ar[1000], long long int a[1000],int n){
for(int i=0;i<n;i++){
    a[i]=ar[i];
}

return;
}
int main(){
    int n;
    cin>>n;
long long int a[1000];
long long int ar[1000];
int i,sum=0;
if(n>=1 &&n<=10000){
for(i=0;i<n;i++){
    cin>>a[i];
}
cout<<endl;
cout<< "input the value of operation"<<endl;
int q;
cin>>q;
for(i=1;i<=q;i++){
        int x;
    cin>>x;
    int j=n-x;
    for(int k=0;k<n;k++){
        ar[k]=a[k]+a[ (j+k)%n ];

    }
    copyarray(ar,a,n);
    cout<<endl;

}
for(int k=0;k<n;k++){
        sum=sum+a[k];
    }
    cout<<endl;
    int r;
     r=sum % 1000000007;
    cout<<r<<"  "<<endl;

}
return 0;
}

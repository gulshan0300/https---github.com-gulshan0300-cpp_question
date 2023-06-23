#include<iostream>
using namespace std;
int main(){
int a[5]={5,4,3,2,1};
int i,j,n=5;
for(i=0;i<n;i++){
    cout<<a[i]<<"   ";

}
cout<<endl;
for(i=0;i<=n-2;i++){
    for(j=0;j<=n-2;j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
}
for(i=0;i<n;i++){
    cout<<a[i]<<"   ";

}
return 0;
}

#include<iostream>
using namespace std;
int main(){
int i,j,k,n,no,num;
cin>>n;
for(i=1;i<=n;i++){
     no=0;
    for(j=1;j<=i;j++){

        cout<<j<<"\t";
    }
    for(j=1;j<=(2*n-2*i)-1;j++){
        cout<<"\t";
    }
    for(j=i;j>=1;j--){
        if(j!=n){
        cout<<j<<"\t";
        }
        }


    cout<<endl;
}
return 0;
}

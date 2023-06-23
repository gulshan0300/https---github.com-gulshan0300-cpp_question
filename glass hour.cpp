#include<iostream>
using namespace std;
int main(){
int i,j,k,n;
cin>>n;
for(i=n;i>=0;i--){
        k=i+1;
    for(j=1;j<=n-i;j++){
        cout<<"\t";
    }
    for(j=1;j<=i+1;j++){
        k--;
        cout<<k<<"\t";
    }
    for(int l=1;l<=i;l++){
        k++;
        cout<<k<<"\t";
    }
    cout<<endl;
}
for(i=1;i<=n;i++){
        k=i+1;
    for(j=1;j<=n-i;j++){
        cout<<"\t";
    }
    for(j=1;j<=i+1;j++){
        k--;
        cout<<k<<"\t";
    }
    for(int l=1;l<=i;l++){
        k++;
        cout<<k<<"\t";
    }
    cout<<endl;
}
return 0;

}

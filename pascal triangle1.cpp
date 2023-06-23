#include<iostream>
using namespace std;
int main(){
int i,j,k,n;
cin>>n;
for(i=1;i<=n;i++){
        k=1;
    for(j=1;j<=n+1-i;j++){
        cout<<"\t";
    }
    for(j=1;j<=i;j++){
        cout<<k<<"\t"<<"\t";
        k=k*(i-j)/j;
    }
    cout<<endl;
}
return 0;
}

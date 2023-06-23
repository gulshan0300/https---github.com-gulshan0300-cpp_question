#include<iostream>
#include<cmath>
using namespace std;
int main(){
int i,j,k,n;
cin>>n;
for(i=1;i<=n;i++){
        k=1;
    for(j=1;j<=i;j++){
        cout<<k<<"\t";

        k=k*(i-j)/j;
    }
    cout<<endl;
}
return 0;
}

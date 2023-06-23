#include<iostream>
#include<cmath>
using namespace std;
int main(){
int i,j,k,r,N,n,ans=0;
cin>>N;
for(i=1;i<=N;i++){
    cin>>n;



    for(k=1;k<=i+2;k++){
     if(n>0){
        r=n%10;
        n/=10;
        ans=ans+r*(pow(2,k-1));

     }

    }

    cout<<endl;

}
for(i=1;i<=N;i++){
     for(k=1;k<=i+2;k++){
    cout<<ans;
     }
     cout<<endl;
}
return 0;
}

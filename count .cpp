#include<iostream>
using namespace std;
int main(){
long int n,r,i,n2;
int ans=0;
cin>>n>>n2;
if(n>=0||n<=100000000&&n2>=0||n2<=9){
for(i=1;n>0;i++){
    r=n%10;
    n/=10;
    if(r==n2){
        ans++;
    }

}
cout<<ans<<endl;
}
return 0;
}

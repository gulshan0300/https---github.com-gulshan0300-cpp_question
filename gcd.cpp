#include<iostream>
using namespace std;
int main(){
long int n1,n2;
 long int i,r,ans=0,r1;
cin>>n1>>n2;
for(i=1;i<=n1&&i<=n2;i++){
    if(n1%i==0&&n2%i==0){
        ans=i;
    }

}
cout<<ans<<endl;
return 0;
}

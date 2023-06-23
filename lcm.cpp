#include<iostream>
using namespace std;
int main(){
long int n1,n2;
long int i,ans=0;
cin>>n1>>n2;
for(i=2;i<=n1*n2;i++){
    if(i%n1==0&&i%n2==0){
        ans=i;
    break;
    }


}
cout<<ans<<endl;
return 0;
}

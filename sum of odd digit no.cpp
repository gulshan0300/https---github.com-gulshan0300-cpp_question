#include<iostream>
using namespace std;
int main(){
int i,n,ans1=0,ans2=0,r;
cin>>n;
for(i=1;n>0;i++){
    r=n%10;
    n=n/10;
    if(i%2==1){
        ans1+=r;
    }
    else{
        ans2+=r;
    }

}
cout<<ans1<<endl;
cout<<ans2<<endl;
return 0;
}

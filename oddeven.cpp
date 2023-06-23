#include<iostream>
using namespace std;

void sum(int n){
int i,ans=0,r;
for(i=1;n>0;i++){
    r=n%10;
    n/=10;
    ans+=r;
}
if(ans%4==0||ans%3==0){
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}

}

int main(){
int n,i,no,ans;

cin>>n;
for(i=1;i<=n;i++){
    cin>>no;


}
sum(no);
return 0;
}

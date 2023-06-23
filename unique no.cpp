#include<iostream>
using namespace std;

int main(){
int no,n,i;
cin>>n;
int ans=0;
for(i=1;i<=n;i++){
    cin>>no;
    ans=ans^no;
}
cout<<"unique no:"<<ans;
cout<<endl;
return 0;
}

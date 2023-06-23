#include<iostream>
using namespace std;

int main(){
int i,n;//for creating multiple bucket
cin>>n;
for(i=1;i<=n;i=i+1){
    if(i%2==0){
        cout<<i<<' ';
    }
}
cout<<endl;
for(i=2;i<=n;i=i+2){
    cout<<i<<' ';
}
return 0;

}

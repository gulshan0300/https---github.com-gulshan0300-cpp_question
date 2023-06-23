#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i;
for(i=2;i<=n;i++){
    if(n%i==0){
        break;
    }
}
if(n==i){
    cout<<"prime"<<"\t";
}
else{
    cout<<"not prime"<<"\t";
}
cout<<endl;
return 0;
}

#include<iostream>
using namespace std;

int main(){
int i,j,n,k;

cin>>n;
if(n%2==1){
for(i=1;i<=1;i++){
    for(j=1;j<=n;j++){
        cout<<" * ";
    }
    cout<<endl;
}
for(i=2;i<=(n+1)/2;i++){
    for(j=1;j<=(n+1)/2+1-i;j++){
        cout<<" * ";
    }
    for(j=1;j<=2*i-3;j++){
        cout<<"   ";
    }
    for(j=1;j<=(n+1)/2+1-i;j++){
        cout<<" * ";
    }
    cout<<endl;
}
for(i=(n-1)/2;i>=2;i--){
    for(j=1;j<=(n+1)/2+1-i;j++){
        cout<<" * ";
    }
    for(j=1;j<=2*i-3;j++){
        cout<<"   ";
    }
    for(j=1;j<=(n+1)/2+1-i;j++){
        cout<<" * ";
}
cout<<endl;
}
for(i=n;i<=n;i++){
    for(j=1;j<=n;j++){
        cout<<" * ";
    }
    cout<<endl;
}
}
else{
    cout<<"invalid input";
}
return 0;
}

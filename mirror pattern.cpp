#include<iostream>
using namespace std;
int main(){
int i,j,n;
cin>>n;


    for(i=1;i<=(n+1)/2;i++){
        for(j=1;j<=(n+1)/2-i;j++){
            cout<<"   ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(i=(n-(n+1)/2);i>=1;i--){
        for(j=1;j<=(n+1)/2-i;j++){
            cout<<"   ";
        }
        for(j=1;j<=2*i-1;j++){
            cout<<" * ";
        }

        cout<<endl;
    }


return 0;
}

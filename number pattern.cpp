#include<iostream>
using namespace std;

int main(){
int n,row,i;
int no;
cin>>n;
for(row=1;row<=n;row=row+1){
    for(i=1;i<=n-row;i=i+1){
        cout<<' ';
    }
    no=1;
    for(i=1;i<=2*row-1;i=i+1){
        cout<<no;
        no=no+1;
    }
    cout<<endl;
}
return 0;
}

#include<iostream>
using namespace std;

int main(){
int row,col;
int n;
cin>>n;
for(row=1;row<=n;row=row+1){
    for(col=1;col<=row;col=col+1){
        cout<<'*';
    }
    cout<<endl;
}
return 0;
}

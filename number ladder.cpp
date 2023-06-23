#include<iostream>
using namespace std;

int main(){
int i,col,row,n;
int num=1;
cin>>n;
for(row=0;row<n;row++){
    for(col=0;col<=row;col++){



        cout<<num;
        num++;

    }
    cout<<endl;
}
return 0;
}

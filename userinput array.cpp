#include<iostream>
using namespace std;
int main(){
int r,c,row,col;
int val=1;
int a[100][100];
cin>>r>>c;
for(row=0;row<r;row++){
    for(col=0;col<c;col++){
        //cin>>a[row][col];
        a[row][col]=val;;
        val++;
    }
    cout<<endl;
}
for(row=0;row<r;row++){
    for(col=0;col<c;col++){
        cout<<a[row][col]<<"    ";
    }
    cout<<endl;
}
return 0;
}


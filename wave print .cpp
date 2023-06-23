#include<iostream>
using namespace std;

void waveprint(int a[][100], int n , int m){
int col,row;
for(col=0;col<=m-1;col++){
    if(col%2==0){
        for(row=0;row<=n-1;row++){
            cout<<a[row][col]<<"    ";
        }
    }
    else{
        for(row=n-1;row>=0;row--){
            cout<<a[row][col]<<"    ";
        }
    }
}
}
int main(){
int n,m,i,val=1;
int j;
cin>>n>>m;
int a[100][100];
for(i=0;i<n;i++){
    for( j=0;j<m;j++){
        a[i][j]=val;
        val++;

    }

}
for(i=0;i<n;i++){
    for( j=0;j<m;j++){
        cout<<a[i][j]<<"    ";

    }
    cout<<endl;
}
waveprint(a,n,m);
return 0;
}

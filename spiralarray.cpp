#include<iostream>
using namespace std;

void spiral(int a[100][100], int n, int m){
int sc=0,ec=m-1,sr=0,er=n-1;
while(sc<=ec&&sr<=er){
    for(int col=sc;col<=ec;col++){
        cout<<a[sr][col]<<" ";
    }
    sr++;
    for(int row=sr;row<=er;row++){
        cout<<a[row][ec]<<" ";
    }
    ec--;
    if(sr<er){
    for(int col=ec;col>=sc;col--){
        cout<<a[er][col]<<" ";
    }
    er--;
    }
    if(sc<ec){
    for(int row=er;row>=sr;row--){
        cout<<a[row][sc]<<" ";
    }
    sc++;
    }
}
}
int main(){
int n,m,i,j,val=1;
cin>>n>>m;
int a[100][100];
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        a[i][j]=val;
        val++;
    }
    cout<<endl;
}
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
spiral(a,n,m);
return 0;
}

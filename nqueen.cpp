#include<iostream>
using namespace std;
bool issafe(int board[10][10] ,int n,int i,int j){
for(int row=0;row<=i;row++){
    if(board[row][j]==1){
        return false;
    }
}
int x=i;
int y=j;
while(x>=0 && y>=0){
    if(board[x][y]==1){
        return false;
    }
    x--;
    y--;
}
 x=i;
 y=j;
while(x>=0 && y<n){
    if(board[x][y]==1){
        return false;
    }
    x--;
    y++;
}
return true;
}
int ans=0;
bool nqueen(int board[10][10] ,int n,int i){

if(i==n){
    //print
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==1){
                cout<<"q"<<" ";
            }
            else{
                cout<<"_"<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    ans++;
    return false;
}
for(int j=0;j<n;j++){
    if(issafe(board,n,i,j)){
        board[i][j]=1;

    if(nqueen(board,n,i+1)){
        return true;
    }
    board[i][j]=0;
    }
}
return false;//after ittrating coloumes.
}
int main(){
int n;
cin>>n;
int board[10][10]={0};
nqueen(board,n,0);
cout<<ans<<endl;
return 0;
}

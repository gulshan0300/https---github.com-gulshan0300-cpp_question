#include<iostream>
using namespace std;
bool maze1(char maze[10][10],int soln[10][10] ,int n,int m,int i,int j){
if(i==m-1 && j==n-1){
    soln[i][j]=1;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<soln[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return true;
}
//condition for boundary
if(i>m-1 || j>n-1){
    return false;
}
if(maze[i][j]=='X'){
    return false;
}
//solution
soln[i][j]=1;
bool right=maze1(maze,soln,n,m,i,j+1);
bool lef=maze1(maze,soln,n,m,i+1,j);
soln[i][j]=0;
if(right || left){
    return true;
}
return false;
}
int main(){
char maze[10][10]={
                    "0000" ,
                    "00X0",
                    "000X",
                    "0X00"};
int soln[10][10]={0};
int m=4,n=4;
maze1(maze,soln,n,m,0,0);
if(maze1==false){
    cout<<"path do not exist";
}
return 0;
}

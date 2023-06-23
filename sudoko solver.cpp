#include<iostream>
#include<cmath>
using namespace std;
void print(int mat[9][9],int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
}
bool canplace(int mat[9][9],int i,int j,int n,int no){
for(int x=0;x<n;x++){
    if(mat[x][j]==no || mat[i][x]==no){
        return false;
    }
}
int rn=sqrt(n);
int sx= (i/rn)*rn;
int sy =(j/rn)*rn;
for(int x=sx;x<sx+rn;x++){
    for(int y=sy;y<sy+rn;y++){
        if(mat[x][y]==no){
            return false;
        }
    }
}
return true;
}
bool sudokosolver(int mat[9][9],int i,int j,int n){
if(i==n){
    //print
    print(mat,n);

    return true;
}
if(j==n){
    return sudokosolver(mat ,i+1,0,n);
}
if(mat[i][j]!=0){
    return sudokosolver(mat,i,j+1,n);
}
for(int no=1;no<=n;no++){
    if(canplace(mat,i,j,n,no)){
        mat[i][j]=no;
        if(sudokosolver(mat,i,j+1,n)){
            return true;
        }

    }

}
mat[i][j]=0;
return false;
}
int main(){
int mat[9][9]=
{            {5,3,0,0,7,0,0,0,0},
             {6,0,0,1,9,5,0,0,0},
             {0,9,8,0,0,0,0,6,0},
             {8,0,0,0,6,0,0,0,3},
             {4,0,0,8,0,3,0,0,1},
             {7,0,0,0,2,0,0,0,6},
             {0,6,0,0,0,0,2,8,0},
             {0,0,0,4,1,9,0,0,5},
             {0,0,0,0,8,0,0,7,9}
};

sudokosolver(mat,0,0,9);
return 0;
}

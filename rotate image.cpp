#include<iostream>
using namespace std;

void rotateimage(int a[100][100] , int n){
//reverse the row

for(int row=0;row<n;row++){
        int x=0,y=n-1;
    while(x<y){
        swap(a[row][x],a[row][y]);
        x++;
        y--;
    }

}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<"    ";
    }
    cout<<endl;
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i>j){
            swap(a[i][j],a[j][i]);
        }
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<a[i][j]<<"    ";
    }
    cout<<endl;
}
}
int main(){
int n;
cin>>n;
int a[100][100];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
    cout<<endl;
}
rotateimage(a,n);
return 0;
}

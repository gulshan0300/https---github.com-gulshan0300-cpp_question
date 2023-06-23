#include<iostream>
using namespace std;

void findkey(int a[4][4],int n,int m){
//linear search method?
/*int key=26;
int j;
for(int i=0;i<n;i++){
    for( j=0;j<m;j++){
        if(a[i][j]==key){
            cout<<"key is found at:"<<i<<","<<j;
            break;
        }
    }
}
if( j==m){
        cout<<"key is not found";
    }*/
    //binary search method
   /* int key=26;
    bool keyfound=false;

    for(int i=0;i<n;i++){
             int s=0,e=m-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(a[i][mid]==key){
                cout<<"key found at:"<<i<<","<<mid;
                keyfound=true;
                break;

            }
            else if(a[i][mid]<key){
                s=mid+1;
            }
            else if(a[i][mid]>key) {
                e=mid-1;
            }
        }
    }
    if(keyfound==false){
        cout<<"key is not found";
    }*/
    //staircase method
    bool keyfound=false;
    int key=4;
    int i=0,j=m-1;
    while(i<n&&j>=0){
        if(a[i][j]==key){
            cout<<"key is found at:"<<i<<","<<j;
            keyfound=true;
            break;
        }
        else if(a[i][j]<key){
            i++;
        }
        else{
            j--;
        }
    }
    if(keyfound==false){
        cout<<"key is not found";
    }
}
int main(){
int n=4,m=4;
int a[4][4]={
    {1,4,8,10},
    {2,5,9,15},
    {6,13,18,20},
    {11,14,21,25}
    };
    findkey(a,n,m);
    return 0;

}


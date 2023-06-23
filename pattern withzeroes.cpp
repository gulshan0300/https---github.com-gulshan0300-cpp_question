#include<iostream>
using namespace std;

int main (){
int n,row,j;
int no=1;
cin>>n;
for(row=1;row<=n;row++){
    for(j=1;j<=row;j++){
      if(row>2){
        if(j==1||j==row)
            cout<<no;
        else{
            cout<<0;
        }
      }
      else{
        cout<<no;
      }

    }


    no++;
    cout<<endl;
}
return 0;
}

#include<iostream>
using namespace std;
int main(){
int n,i,j,no=0,l;
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=n-i;j++){
        cout<<"  ";
    }
    for(j=1;j<=i;j++){
        no++;
        cout<<no<<" ";

    }
    for(l=1;l<i;l++){
        no--;
        cout<<no<<" ";
    }
    cout<<endl;

}
return 0;
}

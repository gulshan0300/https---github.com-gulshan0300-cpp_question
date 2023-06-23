#include<iostream>
using namespace std;
int main(){
int i,j,k,n,l;
cin>>n;
for(i=1;i<=n+1;i++){
        k=n+1;l=j+1;
    for(j=1;j<=i;j++){
        k--;
        cout<<k<<"\t";
    }
    for(j=1;j<=2*(n-i)+1;j++){
        cout<<"\t";
    }
    for(j=1;j<=i;j++){
        if(j==1&&i==n+1){
                k++;
        continue;
        }
        cout<<k<<"\t";
        k++;

    }
    cout<<endl;
}
for(i=1;i<=n;i++){
        k=n+1;
    for(j=1;j<=(n+1)-i;j++){
        k--;
        cout<<k<<"\t";
    }
    for(j=1;j<=2*i-1;j++){
        cout<<"\t";
    }
    for(j=1;j<=(n+1)-i;j++){
        cout<<k<<"\t";
        k++;
    }
    cout<<endl;
}
        return 0;

}

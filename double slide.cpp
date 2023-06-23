#include<iostream>
using namespace std;
int main(){
int i,j,n,k;
cin>>n;
if(n%2==1){
    for(i=1;i<=(n+1)/2;i++){
            k=i;
        for(j=1;j<=(n+1)-2*i;j++){
            cout<<"\t";
        }
        for(j=1;j<=i;j++){
            cout<<k<<"\t";
            k--;
        }
        for(j=1;j<=2*i-3;j++){
            cout<<"\t";
        }
        for(j=1;j<=i;j++){
            if(j==1&&i==1){
                continue;
            }
            k++;
            cout<<k<<"\t";

        }
       cout<<endl;
    }
    for(i=(n-1)/2;i>=1;i--){
            k=i;
        for(j=1;j<=(n+1)-2*i;j++){
            cout<<"\t";
        }
        for(j=1;j<=i;j++){
            cout<<k<<"\t";
            k--;
        }
        for(j=1;j<=2*i-3;j++){
            cout<<"\t";
        }
        for(j=1;j<=i;j++){
            if(j==1&&i==1){
                continue;
            }
              k++;
            cout<<k<<"\t";

        }
        cout<<endl;
    }

}
return 0;
}

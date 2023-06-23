#include<iostream>
using namespace std;
void shop(int a[100],int am[200],int k[200], int n ,int q ){

for(int i=0;i<q;i++){
        int sum=0;
    for(int j=0;j<n;j++){
        if(am[i]%a[j]==0){
            sum++;
           // cout<<sum<<endl;
        }
    }
    //cout<<sum<<endl;
   // cout<<k[i]<<endl;
    if(sum>=k[i]){
        cout<< "yes" <<endl;
    }
    else if(sum<k[i]){
        cout<< "no" <<endl;
    }
}
}
int main(){
int n;
cin>>n;
int a[100];
if(n>=1){
for(int i=0;i<n;i++){
    cin>>a[i];
}
cout<<endl;
int q;
cin>>q;

int k[200];
int am[200];

for(int i=0;i<q;i++){
    cin>>am[i]>>k[i];

}
cout<<endl;

shop(a,am,k,n,q);


}
return 0;
}

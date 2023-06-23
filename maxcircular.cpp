#include<iostream>
#include<climits>
using namespace std;
int maxarray(int a[],int n){
    int maxvalue=INT_MIN;
for(int i=0;i<n;i++){

    for(int j=i;j<n;j++){
            int sum=0;
        for(int k=i;k<=j;k++){
            sum+=a[k];
            }
            if(maxvalue<sum){
                maxvalue=sum;

            }

            }

}
            return maxvalue;
}
int minarray(int a[],int n){
    int wi,wj;
int minvalue=INT_MAX;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        int sum=0;
        for(int k=i;k<=j;k++){
            sum+=a[k];
        }
        if(sum<minvalue){
            minvalue=sum;
        }
    }
}
return minvalue;
}
int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
    int n;
    cin>>n;
    int value=0;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];

}
int total=0;
for(int i=0;i<n;i++){
    total+=a[i];
}
cout<<endl;
value=total-minarray(a,n);
int ans=max(value,maxarray(a,n) );
if(value==0){
    ans=maxarray(a,n);
}
cout<<ans<<"  "<<endl;
//int ans=minarray(a,n);
//cout<<ans<<"  ";
    }
return 0;
}

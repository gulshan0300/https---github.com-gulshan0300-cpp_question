#include<iostream>
#include<climits>
using namespace std;
void maxsum(int a[100],int n){
int maxvalue=INT_MIN;
int sum=0;
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        sum=a[i]+a[ (j+1)%n ];
        if(sum>maxvalue){
            maxvalue=sum;
        }
    }
}
cout<< maxvalue <<endl;
}

int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    int a[1000];
    for(int i=1;i<=k;i++){
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    }
    maxsum(a,n);
return 0;
}

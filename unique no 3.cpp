#include<iostream>
using namespace std;
int main(){
int a[]={2,36,2,2,4,4,4};
int n=sizeof(a)/sizeof(int);
int cnt[64]={0};
for(int i=0;i<n;i++){
    int pos=0;
    int no=a[i];
    while(no>0){
        if((no&1)==1 ){
            cnt[pos]++;
        }
        pos++;
        no>>=1;
    }
}
for(int i=0;i<64;i++){
        cnt[i]%=3;
    cout<<cnt[i]<<" ";
}
cout<<endl;
int p=1;
int ans=0;
for(int i=0;i<64;i++){
    ans+=cnt[i]*p;
    p=p<<1;
}
cout<<ans<<endl;
return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
int i,j,digit,r;
if(n>0||n<1000 && m>n||m<10000){
    for(i=n;i<=m;i++){
        int no=i;int ans=0;
        for(j=1;no>0;j++){
            no/=10;
            digit=j;
        }
        no=i;
        for(j=1;no>0;j++){
            r=no%10;
            no=no/10;
            ans=ans+pow(r,digit);

        }
        if(ans==i){
        cout<<ans<<endl;
        }

    }
}
return 0;
}


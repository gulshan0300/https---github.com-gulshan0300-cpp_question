#include<iostream>
using namespace std;
int main(){
int i,j,n,no=1;
cin>>n;
for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
        if(j==1&&i==1){
            continue;
        }
        cout<<no;
        no++;
    }

    cout<<endl;
}

return 0;
}

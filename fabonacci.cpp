#include<iostream>
using namespace std;
int main(){
int i,j,n,f=0,s=1;
int sum;

cin>>n;
cout<<" "<<f<<endl;
for(i=2;i<=n;i++){
    for(j=1;j<=i;j++){
        sum=f+s;
        cout<<" "<<s;
        f=s;
        s=sum;

    }

    cout<<endl;
}

return 0;
}

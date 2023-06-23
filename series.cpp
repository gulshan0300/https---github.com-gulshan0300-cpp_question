#include<iostream>
using namespace std;
int main(){
int N1,N2,n,j;
n=1;
cin>>N1>>N2;
for(n=1;n<=N1;n++){
    j=3*n+2;


    if(j%N2!=0){
    cout<<j<<endl;
    }
    else{
        N1++;
    }


}
return 0;
}

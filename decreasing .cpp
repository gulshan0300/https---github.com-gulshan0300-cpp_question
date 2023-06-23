#include<iostream>
using namespace std;
int main(){
int n,no,i,j=1;
int first=no;
bool ch;
cin>>n;
for(i=1;i<=n;i++){
    cin>>no;
    if(first>no||first<no){
        first=no;
        j++;
        ch=true;
    }
    else{
        ch=false;
    }
}
cout<<ch<<endl;
return 0;
}

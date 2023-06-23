#include<iostream>
using namespace std;
int main(){
int n,i,next;
cin>>n;
int no;
cin>>no;
bool isincreasing=true;
for(i=1;i<=n-1;i++){
    cin>>next;
    if(next>no){
        no=next;
        isincreasing=true;
    }
    if(next<no){
        no=next;
        isincreasing=true;
    }
    else{
        isincreasing=false;
    }
}
cout<<boolalpha<<isincreasing<<endl;
return 0;
}

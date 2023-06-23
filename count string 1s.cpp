#include<iostream>
using namespace std;
int count(int n,int ld){
if(n==0){
    return 0;
}
if(n==1){
    if(ld==0){
        return 2;
    }
    else{
        return 1;
    }
}
if(ld==0){
    return count(n-1,0)+count(n-1,1);
}
else{
    return count(n-1,0);
}
}
int main(){
int n=2;
cout<<count(n,0)<<endl;
return 0;
}

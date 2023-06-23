#include<iostream>
using namespace std;
int main(){
int a[4]={4,8,12,2};
int key=122;
int i;
for(i=1;i<4;i++){
    if(a[i]==key){
        cout<<"key is fount at i index:"<<i;
        break;
    }
}
if(i==4){
    cout<<"key is not found";
}
return 0;
}

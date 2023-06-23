#include<iostream>
using namespace std;
void printarray(int*a,int n){
cout<< "inside the function"<<endl;
for(int i=0;i<4;i++){
    cout<<*(a+i)<<" ";
}
cout<<endl;
}
int main(){
int a[]={1,2,3,4};
for(int i=0;i<4;i++){
    cout<<a[i]<<" ";
}
cout<<endl;
printarray(a,4);

return 0;
}

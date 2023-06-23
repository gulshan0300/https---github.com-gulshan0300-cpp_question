#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int a[]={1,4,5,10,11,20};
int n=sizeof(a)/sizeof(int);
int key=11;
//int *p=find(a,a+n,key);
bool p=binary_search(a,a+n,key);
//int index=p-a;
int *k= &p;
int index=p-a;
if(p==false){
    cout<<"key is not found"<<endl;
}
else{
    cout<< "key is found "<<endl;
}
return 0;
}

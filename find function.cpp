#include<iostream>
#include<algorithm>
using namespace std;
int findfun(int*a,int n,int key){
    int i;
for(i=0;i<n;i++){
    if(a[i]==key){
        return i;
        break;
    }
}

if( i==n){
        return i;
    }
}
int main(){
int a[]={3,5,6,1,7,10};
int n=sizeof(a)/sizeof(int);
int key;
cin>>key;
//cout<<find(a,a+n,key)<<endl;
int*p= find(a,a+n,key);
//int index=findfun(a,n,key);
int index=p-a;
if(index==n){
    cout<<"key is not present"<<endl;
}
else{
    cout<< "key is present at: "<<index<<endl;
}
return 0;
}

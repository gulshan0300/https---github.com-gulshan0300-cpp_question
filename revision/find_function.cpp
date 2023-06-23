#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={2,12,4,5,56,67,7,8};
    int n=sizeof(arr)/sizeof(int);
    int *p=find(arr,arr+n,56);
    int index=p-arr;
    if(index==n){
        cout<<"key is not found"<<endl;
    }
    else{
        cout<<"key is found at: "<<index<<endl;
    }
    return 0;

}
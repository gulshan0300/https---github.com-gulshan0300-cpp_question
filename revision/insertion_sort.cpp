#include<iostream>
using namespace std;

void insertion_sort(int *arr,int n){
    for(int i=1;i<n;i++){
        int puc=arr[i];
        int j;
        for( j=i-1;j>=0 and arr[j]>puc;j--){
                arr[j+1]=arr[j];
            
        }
    arr[j+1]=puc;
    }
}

int main(){
    int *arr;

    int n;
    cin>>n;
    arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sorted array"<<endl;
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
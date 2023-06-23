#include<iostream>
using namespace std;

void heapify(int arr[] ,int size,int index){
int left= 2*index;
int right=2*index+1;
int max_index=index;
if(left<size and arr[max_index]<arr[left]){
    max_index=left;
}
if(right<=size and arr[max_index]<arr[right]){
    max_index=right;
}

if(max_index!=index){
    swap(arr[index],arr[max_index]);
    heapify(arr,size,max_index);
}

}

void heapsort(int arr[],int n){
if(n==1){
    return ;
}
heapify(arr,n,1);
//swap element
swap(arr[1],arr[n-1]);
n--;
heapsort(arr,n);
}

int main(){
int arr[]={-1,2,1,0,4,3};
int n=sizeof(arr)/sizeof(int);
for(int i=1;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
//heapsort(arr,n);
heapify(arr,n,1);
for(int i=1;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}

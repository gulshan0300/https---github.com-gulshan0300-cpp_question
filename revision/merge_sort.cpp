#include<iostream>
using namespace std;

void merge_fun(int*arr,int*b,int *c,int s,int e){
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;

    while(i<=mid and j<=e){
        if(b[i]<=c[j]){
            arr[k]=b[i];
            i++;
            k++;
        }
        else{
            arr[k]=c[j];
            k++;
            j++;
        }
    }
    while(i<=mid){
        arr[k]=b[i];
        k++;
        i++;
    }
    while(j<=e){
        arr[k]=c[j];
        k++;
        j++;
    }
}

void merge_sort(int *arr,int s,int e){
    if(s>=e){
        return ;
    }
    int b[100];
    int c[100];
    int m=(s+e)/2;
    for(int i=s;i<=m;i++){
        b[i]=arr[i];
    }
    for(int j=m+1;j<=e;j++){
        c[j]=arr[j];
    }
    //recursion
    merge_sort(b,s,m);
    merge_sort(c,m+1,e);
    merge_fun(arr,b,c,s,e);
}

int main(){
    int arr[100];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int s=0;
    int e=n-1;
    merge_sort(arr,s,e);
    cout<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
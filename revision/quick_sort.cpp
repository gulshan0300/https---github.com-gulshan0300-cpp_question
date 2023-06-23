#include<iostream>
using namespace std;

int index(int*arr,int s,int e){
    int i=s-1;
    for(int j=s;j<e;j++){
        if(arr[j]<=arr[e]){
            i++;
            swap(arr[i],arr[j]);
        }

    }
    swap(arr[i+1],arr[e]);
    return i+1;
}

void quick_sort(int*arr,int s,int e){
    if(s>=e){
        return ;
    }
    int idx=index(arr,s,e);
    quick_sort(arr,s,idx-1);
    quick_sort(arr,idx+1,e);
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s=0,e=n-1;
    quick_sort(arr,s,e);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
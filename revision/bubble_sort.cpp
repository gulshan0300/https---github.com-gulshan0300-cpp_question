#include<iostream>
using namespace std;

int swap(int &a,int &b){
    int c;
    c=b;
    b=a;
    a=c;
    ;
    return a,b;
}

void bubblesort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return ;

}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    bubblesort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;

int swap1(int &a,int &b){
    int c=a;
    a=b;
    b=c;
    return a,b ;
}

void selection_sort(int *arr,int n){
    for(int i=0;i<n-1;i++){
        int min=i ;
        for(int j=i+1;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap1(arr[i],arr[min]);
    }
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"sorted array"<<endl;
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

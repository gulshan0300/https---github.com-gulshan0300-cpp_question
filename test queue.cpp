 #include<iostream>
 using namespace std;

    void print(int *arr,int f,int r){
        if(f>r){
    for(int i=f;i<9;i++){

        cout<<arr[i]<<" ";
    }
    for(int i=0;i<=r;i++){
        cout<<arr[i]<<" ";
    }
        }

        else if(f<r){
            for(int i=f;i<=r;i++){
                cout<<arr[i]<<" ";
            }
        }
    cout<<endl;
    }
    int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int f=5,r=4;
    print(arr,f,r);

    return 0;

    }

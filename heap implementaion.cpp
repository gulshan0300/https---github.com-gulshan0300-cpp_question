#include<iostream>
using namespace std;

class heap{
public:
    int arr[100];
    int size ;

    heap(){
    arr[0]=-1;
    size=0;
    }
    // max heap
    void insert(int data){
        size=size+1;
    int index=size;
    arr[index]=data;

    while(index>1){
        int parent_index=index/2 ;
        if(arr[parent_index]<arr[index]){
            swap(arr[parent_index],arr[index]);
            index=parent_index;

        }
        else{
            return ;
        }
    }

    }

    void deleteinheap(){
    if(size==0){
        return ;
    }
    //put last element in first position
    arr[1]=arr[size];
    //delete last element
    size--;
    //rellocate root node
    int i=1;
    while(i<size){
        int l_index=2*i;
        int r_index=2*i+1;
        if(l_index<size and arr[i]<arr[l_index]){
            swap(arr[i],arr[l_index]);
            i=l_index;
        }
        else if(r_index<size and arr[i]<arr[r_index]){
            swap(arr[i],arr[r_index]);
            i=r_index;
        }
        else{
            return ;
        }
    }

    }

    void print(){
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    }
};

void heapify(int arr[] ,int size,int index){
int left= 2*index;
int right=2*index+1;
int max_index=index;
if(left<size and arr[max_index]<arr[left]){
    max_index=left;
}
if(right<size and arr[max_index]<arr[right]){
    max_index=right;
}

if(max_index!=index){
    swap(arr[index],arr[max_index]);
    heapify(arr,size,max_index);
}

}

void buildheap(int arr[],int n ){
for(int i=2;i<n;i++){
    int index=i;
    int parent = index/2;
    while(index>1 and arr[index]>arr[parent]){
        //arr[index]>arr[parent]
            swap(arr[index],arr[parent]);
            index=parent;
            parent=parent/2;

    }
}
}

int main(){
/*heap h;
h.insert(70);
h.insert(50);
h.insert(30);
h.insert(20);
h.insert(60);
h.insert(40);
h.insert(55);
h.insert(80);
h.print();
h.deleteinheap();
h.print();*/

int arr[]={-1,10,20,5,6,1,8,9,4};
int n=sizeof(arr)/sizeof(int);

/*for(int i=1;i<n/2;i++){
    heapify(arr,n,i);
}*/
cout<<"printing array"<<endl;
for(int i=1;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
buildheap(arr,n);
for(int i=1;i<n;i++){
    cout<<arr[i]<<" ";
}

return 0;
}

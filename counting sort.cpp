#include<iostream>
using namespace std;
void countingsort(int *a,int n){
int largest=-1;
for(int i=0;i<n;i++){
    largest=max(largest,a[i]);
}
int *freq=new int[largest+1]{0};
for(int i=0;i<n;i++){
    freq[a[i]]++;
}
int j=0;
for(int i=0;i<=largest;i++){
    while(freq[i]>0){
        a[j]=i;
        freq[i]--;
        j++;
    }

}

}

int main(){
int a[]={88,12,34,56,1,2,3,4,6,4,97,98};
int n=sizeof(a)/sizeof(int);
countingsort(a,n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}

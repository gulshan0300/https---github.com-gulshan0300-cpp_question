#include<iostream>
#include<algorithm>
#include<ctime>

using namespace std;
void bubblesort(int a[],int n){
for(int i=1;i<=n-1;i++){
    for(int j=0;j<=(n-1-i);j++){
        if(a[j]>a[j+1]){
            swap(a[j],a[j+1]);
        }
    }
}
}
int main(){
int n;
cin>>n;
int a[100000];
//time_t start = clock();
for(int i=0;i<n;i++){
    a[i]=n-i;
}
time_t start =clock();
bubblesort(a,n);
time_t end1=clock();
cout<<" bubble sort "<<end1-start<<endl;

for(int i=0;i<n;i++){
    a[i]=n-i;
}
start =clock();
sort(a,a+n);
end1=clock();
cout<<" sort "<<end1-start<<endl;
return 0;

}

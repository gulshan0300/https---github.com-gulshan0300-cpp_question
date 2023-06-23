#include <bits/stdc++.h>

using namespace std;

int reversearray(int a[],int n){
    int i=0,j=n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    reversearray(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<"   ";

    }
    cout<<endl;
    return 0;
}


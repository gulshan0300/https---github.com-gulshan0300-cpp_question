#include<iostream>
#include<cstring>
using namespace std;
auto subarray(char a[],int i,int j){
for(i=0;i<strlen(a);i++){
    for(j=i;j<strlen(a);j++){
        for(int k=i;k<=j;k++){
            cout<<a[k];
        }
        cout<<endl;
    }
}
}
int main(){
char a[1000];
cin.getline(a,1000);
char ar[1000]={ subarray(a,0,0)};
for(int i=0;i<strlen(ar);i++){
    cout<<ar[i];
}
return 0;
}

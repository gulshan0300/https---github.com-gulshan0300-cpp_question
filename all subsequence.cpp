#include<iostream>
#include<cstring>
using namespace std;
int main(){
char a[]="ab";
int n=strlen(a);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        for(int k=i;k<=j;k++){
            //a[j+1]='\0';
            cout<<a[k];
        }
        cout<<endl;
    }
   // cout<<endl;
}
return 0;
}

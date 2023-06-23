#include<iostream>
#include<cstring>
using namespace std;
void rotatestring(char a[], int n){
int len=strlen(a);
int i=len-1;
while(i>=0){
    a[i+n]=a[i];
    i--;
   // cout<< a <<endl;
}
i=0;
int j=len;
while(i<n){
    a[i]=a[j];
    i++;
    j++;
}
//cout<<a<<endl;
a[len]= '\0';
cout<<a<<endl;
}
int main(){
char a[100]= "hello";
int n;
cin>>n;
rotatestring(a,n);
return 0;
}

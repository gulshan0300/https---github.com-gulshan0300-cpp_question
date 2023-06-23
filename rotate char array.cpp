#include<iostream>
#include<cstring>
using namespace std;
int main(){
char a[100]= "hello";
char ar[100];
int len=strlen(a);
int k,i;
cin>>k;
int j=len-k+1;
//for(i=0;a[i]!= '\0';i++){
    cout<<a<<endl;

//cout<<endl;
for(i=0;a[i]!= '\0';i++){
    ar[ (j+i)%len ]=a[i];

}
cout<<endl;
for(i=0;ar[i]!= '\0';i++){
    cout<<ar<<endl;
}
cout<<endl;
}

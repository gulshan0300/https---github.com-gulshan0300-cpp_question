#include<iostream>
#include<cstring>
using namespace std;

void removeduplicate(char a[]){
int len=strlen(a);
int i=0,j=1;
while(j<len){
    if(a[i]!=a[j]){
        i++;
        a[i]=a[j];
    }
    j++;
}
a[i+1]= '\0';
return;
}
int main(){
char a[1000];
cin>>a;
cout<<a<<endl;
removeduplicate(a);
cout<<a<<endl;
return 0;
}

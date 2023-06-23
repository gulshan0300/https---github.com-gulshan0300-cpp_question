#include<iostream>
#include<cstring>
using namespace std;
int stringtoint(char *a,int n){
if(n==0){
    return 0;
}
int digit=a[n-1]-'0';
int sa=stringtoint(a,n-1);
int ba=sa*10+digit;
return ba;
}
int main(){
char a[]="4329";
int n=strlen(a);
int ans=stringtoint(a,n);
cout<<ans+1<<endl;
return 0;
}

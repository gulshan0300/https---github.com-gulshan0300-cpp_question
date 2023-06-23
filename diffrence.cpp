#include<iostream>
#include<cstring>
using namespace std;
int main(){
char a[1000];
cin.getline(a,1000);
int b;
int i=0,j=1;
while(j<strlen(a)){
    b=a[j]-a[i];
    cout<<a[i];
    cout<<b;
    i++;
    j++;
}
cout<<a[strlen(a)-1];

cout<<endl;
return 0;
}

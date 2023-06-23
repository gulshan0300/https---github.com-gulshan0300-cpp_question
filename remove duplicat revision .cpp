#include<iostream>
#include<cstring>
using namespace std;
int main(){
char a[100];
cin.getline(a,100);
int i=0,j=1;
while(j<strlen(a)){
    if(a[i]!=a[j]){
        i++;
        a[i]=a[j];
    }

    j++;
}
a[i+1]='\0';
cout<<a<<endl;
return 0;

}

#include<iostream>
#include<cstring>
using namespace std;
void userinput(char a[100]){
    char ch=cin.get();
    int i=0;
    while(ch!= '\n'){
        a[i]=ch;
        i++;
        ch=cin.get();
    }
    a[i]='\0';
}
int main(){
char a[100];
//userinput(a);
cin.getline(a,100);
int i;
for( i=0;a[i]!='\0';i++){
    continue;
}
cout<<strlen(a);
cout<<a;
return 0;
}

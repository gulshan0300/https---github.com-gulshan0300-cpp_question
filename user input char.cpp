#include<iostream>
using namespace std;
void readline(char a[], char delimiter){
int i;
char ch=cin.get();
for(i=0;ch!=delimiter;i++){
    a[i]=ch;
    ch=cin.get();
}
a[i]='\0';
}
int main(){
char a[100];
cin.getline( a ,100,'$');
//readline(a , '\n'); wecan use inbuilt function
cout<<a<<endl;
return 0;
}

#include<iostream>
using namespace std;
int main(){
char ch='a';
char*chptr=&ch;
char a[]="abcd";
int x=10;
int*y;
y=&x;
cout<<y<<endl;
cout<<&x<<endl;

cout<<*y<<endl;//dereference the pointer
cout<<x<<endl;

cout<<(int*)chptr<<endl;
cout<<(int*)a<<endl;
cout<<a<<endl;
return 0;
}

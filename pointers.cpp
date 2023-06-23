#include<iostream>
using namespace std;
int main(){
int a=10;
int *aptr=&a;
float f=1.11;
float*fptr=&f;
char ch='a';
char*chptr=&ch;

cout<<sizeof(aptr)<<endl;
cout<<sizeof(fptr)<<endl;
cout<<sizeof(chptr)<<endl;


cout<<&a<<endl;
cout<<aptr<<endl;
}

#include<iostream>
using namespace std;

int main(){
int count=0;
char ch;//cin ignores the white space
ch=cin.get();//for count of white space

while(ch!='$'){
    count++;
    ch=cin.get();
}
cout<<"the number of character:" <<count;
return 0;
}

#include<iostream>
using namespace std;
int main(){
char a[100];//="gulshan";
cin>>a;
cout<<a<<endl;//i can also apply a loop
for(int i=0;a[i]!='\0';i++){
    cout<<a[i]<<"   ";
}
cout<<endl;
return 0;
}

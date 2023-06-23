#include<iostream>

using namespace std;

int main(){
char ch;
cout<<"TYPE A CHARACTER"<<endl;
cin>>ch;
if(ch>='A'&&ch<='Z'){
    cout<<"UPPERCASE";

}
else if(ch>='a'&&ch<='z'){
    cout<<"LOWERCASE";
}
else
{
    cout<<"invalid";
}
return 0;
}

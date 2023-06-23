#include<iostream>
using namespace std;
/*void readline(char a[100], char delimiter){
int i=0;
char ch=cin.get();
while(ch!=delimiter){
    a[i]=ch;
    ch=cin.get();
    i++;
}
a[i]='\0';
}*/
int main(){
char a[100];
char delimiter='$';
int i;
char ch=cin.get();
//readline(a , '\n');
for(i=0;ch!=delimiter; i++){
    a[i]=ch;
    ch=cin.get();
}
a[i]='\0';
cout<<a<<endl;
return 0;

}

#include<iostream>
#include<cstring>
using namespace std;
void concate(char a[1000],char b[1000]){
int i=strlen(a);
for(int j=0;j<=strlen(b);j++){
    a[i]=b[j];
    i++;
}
}
bool compare(char a[1000],char b[1000]){
int i=0,j=0;
int lena=strlen(a);
int lenb=strlen(b);
while(i<lena && j<lenb){
    if(a[i]!=b[j]){
        return false;
    }
    i++;
    j++;
}
if(a[i]!='\0' || b[j]!='\0'){
    return false;
}
else{
    return true;

}
}
int main(){
char a[1000];
char b[1000];
cin.getline(a,1000);
cin.getline(b,1000);
//cout<<"befor concate of a "<<a<<endl;
//cout<<"before concate of b "<<b<<endl;
//concate(a,b);
//strcat(a,b);
//cout<<a;
if(strcmp(a,b)==0){
    cout<<"match"<<endl;
}
else{
    cout<<"not a match"<<endl;
}
return 0;
}

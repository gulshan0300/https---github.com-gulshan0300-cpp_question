#include<iostream>
#include<cstring>
using namespace std;
void maping(char a[]){
    int fre[26]={0};
for(int i=0;i<strlen(a);i++){
    char ch=a[i];
    int index=ch- 'a';
    fre[index]++;
}
int ma=0;
for(int i=0;i<26;i++){
        char x=i+ 'a';
if(ma<fre[i]){
    ma=fre[i];
}
}
cout<<ma<<endl;
}
int main(){
char a[100];
cin.getline(a,100);
maping(a);
return 0;
}

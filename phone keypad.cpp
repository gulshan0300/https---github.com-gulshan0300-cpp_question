#include<iostream>
using namespace std;
string key[]={ "","", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };

void phonekeypad(char *ip,char *out,int i,int j){
if(ip[i]=='\0'){
    out[j]='\0';
    cout<<out<<endl;
    return ;
}
int digit =ip[i]-'0';
for(int k=0;key[digit][k]!='\0';k++){
    out[j]=key[digit][k];
    phonekeypad(ip,out,i+1,j+1);
}
}
int main(){
char  ip[100];
char out[100];
cin>>ip;
phonekeypad(ip,out,0,0);
return 0;
}

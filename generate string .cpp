#include<iostream>
using namespace std;
void string1(char *in,char *out,int i,int j){
if(in[i]=='\0'){
    out[j]='\0';
    cout<<out<<endl;
    return ;
}
int fd=in[i]-'0';
char ch = 'A' + fd-1;
out[j]=ch;
string1(in,out,i+1,j+1);
if(in[i+1]!= '\0'){
    int sd=in[i+1]-'0';
    int no=10*fd + sd;
    if(no<=26){
        char ch = 'A' + no - 1;
        out[j]=ch;
        string1(in,out,i+2,j+1);
    }

}

}
int main(){
char in[100];
char out[100];
cin>>in;
string1(in,out,0,0);
return 0;
}

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
void subsequence(char *ip,char *out,int i,int j,string *s,int k){
if(ip[i]=='\0'){
    out[j]='\0';
    s[k]=out[j];
    cout<<s<<endl;
    //sort(out,out+strlen(out));
    return ;
}
subsequence(ip,out,i+1,j,s,k);
out[j]=ip[i];
s[k]=out[j];
subsequence(ip,out,i+1,j+1,s,k+1);
//cout<<out<<endl;
}
int main(){
char ip[]="abc";
char out[100];
string s[100];
subsequence(ip,out,0,0,s,0);
return 0;
}

#include<iostream>
#include<set>
#include<cstring>
using namespace std;
void permuate(char *a,int i,set<string> &s){
if(a[i]=='\0'){
   // cout<<a<<" ";
   string s1(a);
   s.insert(s1);
    return ;
}
for(int j=i;a[j]!='\0';j++){
    swap(a[i],a[j]);
    permuate(a,i+1,s);
    swap(a[i],a[j]);

}
}
int main(){
char a[100];
cin>>a;
set<string> s;
permuate(a,0,s);
for(auto str:s){
    cout<<str<<" ";
}
return 0;
}

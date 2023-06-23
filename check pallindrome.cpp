#include<iostream>
#include<cstring>
using namespace std;
bool ispallindrome(char a[]){
int i=0;
int j=strlen(a)-1;
while(i<j){
    if(a[i]!=a[j]){
        return false;
    }
    i++;
    j--;
    return true;
}

}
int main(){
char a[1000];
cin>>a;
if(ispallindrome(a)==true){
    cout<<"is pallindrome"<<endl;

}
else{
    cout<< "not pallindrome"<<endl;

}
return 0;
}

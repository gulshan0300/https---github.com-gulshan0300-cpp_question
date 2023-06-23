#include<iostream>
using namespace std;
string s[]={ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
void integerstostring(int n){
if(n==0){
    return ;
}
int digit=n%10;

 integerstostring(n/10);
cout<<s[digit]<<" ";
}
int main(){
int n;
cin>>n;
integerstostring(n);
return 0;
}

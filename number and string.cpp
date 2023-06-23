#include<iostream>
using namespace std;
int main(){
char a[1000];
int n;
cin>>n;
cin.get();//for ignoring the 1st new line character
for(int i=0;i<n;i++){
    cin.getline(a,1000);
    cout<<a<<endl;
}
return 0;
}

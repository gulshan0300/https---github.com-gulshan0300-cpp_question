#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
void binaryto(int n){
    int p=1,ans=0;
    string s;
while(n>0){
        if(n%2==0){
            s.push_back('0' );
        }
        else{
            s.push_back('1');
        }
        n/=2;
}
reverse(s.begin(),s.end());
cout<<s<<endl;
}
void binaryusing_bitwise(int n){
int p=1,ans=0;
while(n>0){
    ans+=(n&1)*p;
    n=(n>>1);
    p*=10;
}
cout<< "2 "<< ans<<endl;
}
int main(){
int n=12056428;
binaryto(n);
binaryusing_bitwise(n);
return 0;
}
